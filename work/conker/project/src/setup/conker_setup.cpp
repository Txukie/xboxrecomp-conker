/*
 * conker-setup: the first-launch window. It asks for the player's own copy
 * of the game -- a disc image, an archive holding one, or the folder of an
 * extracted disc -- and installs it (src/conker_install.c), with progress.
 *
 *   conker-setup --install-to <dir>
 *
 * The game runs it when it finds no game files (conker_find_game). On
 * success it prints the folder to run from and exits 0; closed, it exits 1.
 * Anything else (no display, a library missing) and the game falls back to
 * a desktop file dialog.
 *
 * Tests: CONKER_SETUP_SHOT=<prefix> saves the window every second as
 * <prefix>-N.png; CONKER_SETUP_AUTO=<path> installs that path as if chosen.
 */
#include <QApplication>
#include <QCloseEvent>
#include <QDir>
#include <QDragEnterEvent>
#include <QDropEvent>
#include <QFileDialog>
#include <QFileInfo>
#include <QHBoxLayout>
#include <QLabel>
#include <QMessageBox>
#include <QMimeData>
#include <QPixmap>
#include <QProgressBar>
#include <QPushButton>
#include <QScreen>
#include <QStackedWidget>
#include <QStandardPaths>
#include <QStorageInfo>
#include <QThread>
#include <QTimer>
#include <QVBoxLayout>
#include <cstdio>

#include "../conker_install.h"

namespace {

QString homeShort(const QString &path)
{
    const QString home = QDir::homePath();
    return path.startsWith(home + "/") ? "~" + path.mid(home.size()) : path;
}

class Setup : public QWidget {
public:
    explicit Setup(const QString &installTo) : m_installTo(installTo)
    {
        setWindowTitle("Conker: Live & Reloaded - Setup");
        setWindowIcon(QIcon(":/conker.png"));
        setAcceptDrops(true);

        auto *logo = new QLabel;
        logo->setPixmap(QPixmap(":/conker.png").scaled(80, 80, Qt::KeepAspectRatio,
                                                       Qt::SmoothTransformation));
        auto *title = new QLabel("<b style='font-size:16pt'>Conker: Live &amp; Reloaded</b>"
                                 "<br>Static recompilation");
        auto *header = new QHBoxLayout;
        header->addWidget(logo);
        header->addSpacing(10);
        header->addWidget(title, 1);

        /* First page: what to choose. */
        auto *text = new QLabel(QString(
            "The game is not included. Choose your own copy of the Xbox game "
            "(the USA release):"
            "<ul style='margin-left:-16px'>"
            "<li>a disc image: <i>.iso</i> or <i>.xiso</i>, including a full Redump "
            "dump, or the <i>.7z</i> / <i>.zip</i> it came in,</li>"
            "<li>or the folder of an extracted disc, with <i>default.xbe</i> in it.</li>"
            "</ul>"
            "A disc image is installed once (about 4.5 GB) into<br><tt>%1</tt><br>"
            "and the game starts from there from then on. A folder is used where it "
            "is. You can also drop the file on this window.")
            .arg(homeShort(m_installTo).toHtmlEscaped()));
        text->setWordWrap(true);
        text->setTextFormat(Qt::RichText);
        text->setAlignment(Qt::AlignTop | Qt::AlignLeft);

        auto *pickImage = new QPushButton("Choose disc image...");
        auto *pickFolder = new QPushButton("Choose folder...");
        auto *quit = new QPushButton("Quit");
        pickImage->setDefault(true);
        connect(pickImage, &QPushButton::clicked, this, &Setup::chooseImage);
        connect(pickFolder, &QPushButton::clicked, this, &Setup::chooseFolder);
        connect(quit, &QPushButton::clicked, this, &QWidget::close);
        auto *buttons = new QHBoxLayout;
        buttons->addWidget(quit);
        buttons->addStretch(1);
        buttons->addWidget(pickFolder);
        buttons->addWidget(pickImage);

        auto *choosePage = new QWidget;
        auto *cl = new QVBoxLayout(choosePage);
        cl->setContentsMargins(0, 0, 0, 0);
        cl->addWidget(text, 1);
        cl->addLayout(buttons);

        /* Second page: installing. */
        m_status = new QLabel;
        m_status->setWordWrap(true);
        m_bar = new QProgressBar;
        m_cancel = new QPushButton("Cancel");
        connect(m_cancel, &QPushButton::clicked, this, [this] {
            m_cancel->setEnabled(false);
            m_status->setText("Cancelling...");
            conker_install_cancel();
        });
        auto *cancelRow = new QHBoxLayout;
        cancelRow->addStretch(1);
        cancelRow->addWidget(m_cancel);

        auto *workPage = new QWidget;
        auto *wl = new QVBoxLayout(workPage);
        wl->setContentsMargins(0, 0, 0, 0);
        wl->addStretch(1);
        wl->addWidget(m_status);
        wl->addWidget(m_bar);
        wl->addStretch(1);
        wl->addLayout(cancelRow);

        m_pages = new QStackedWidget;
        m_pages->addWidget(choosePage);
        m_pages->addWidget(workPage);

        auto *root = new QVBoxLayout(this);
        root->setContentsMargins(20, 18, 20, 16);
        root->addLayout(header);
        root->addSpacing(12);
        root->addWidget(m_pages, 1);

        /* Wide enough for the text at the font in use, within the screen
         * (a Steam Deck's is small and its font large). */
        const QRect avail = screen() ? screen()->availableGeometry() : QRect(0, 0, 1280, 800);
        const int w = qMin(qMax(560, fontMetrics().averageCharWidth() * 78), avail.width() - 32);
        const int h = 18 + header->sizeHint().height() + 12
                      + text->heightForWidth(w - 40) + 16 + buttons->sizeHint().height() + 24;
        resize(w, qMin(qMax(h, 320), avail.height() - 48));
    }

    bool done() const { return !m_gameDir.isEmpty(); }
    QString gameDir() const { return m_gameDir; }
    void installForTest(const QString &src) { install(src); }

protected:
    void dragEnterEvent(QDragEnterEvent *e) override
    {
        if (m_pages->currentIndex() == 0 && e->mimeData()->hasUrls())
            e->acceptProposedAction();
    }

    void dropEvent(QDropEvent *e) override
    {
        const QList<QUrl> urls = e->mimeData()->urls();
        if (!urls.isEmpty() && urls.first().isLocalFile())
            install(urls.first().toLocalFile());
    }

    void closeEvent(QCloseEvent *e) override
    {
        if (m_worker) {                 /* stop the install; close when it has */
            m_closing = true;
            if (m_cancel->isEnabled())
                m_cancel->click();
            e->ignore();
            return;
        }
        e->accept();
    }

private:
    QString startDir() const
    {
        const QString dl = QStandardPaths::writableLocation(QStandardPaths::DownloadLocation);
        return QDir(dl).exists() ? dl : QDir::homePath();
    }

    /* A file dialog that fits the screen. */
    QString ask(QFileDialog::FileMode mode, const QString &title, const QString &filter)
    {
        QFileDialog dlg(this, title, startDir(), filter);
        dlg.setFileMode(mode);
        if (mode == QFileDialog::Directory)
            dlg.setOption(QFileDialog::ShowDirsOnly);
        const QRect avail = screen() ? screen()->availableGeometry() : QRect(0, 0, 1280, 800);
        dlg.resize(qMin(900, avail.width() - 32), qMin(600, avail.height() - 48));
        if (dlg.exec() != QDialog::Accepted || dlg.selectedFiles().isEmpty())
            return QString();
        return dlg.selectedFiles().first();
    }

    void chooseImage()
    {
        const QString f = ask(QFileDialog::ExistingFile, "Choose your Conker disc image",
                              "Xbox disc images and archives (*.iso *.xiso *.7z *.zip *.xbe);;"
                              "All files (*)");
        if (!f.isEmpty())
            install(f);
    }

    void chooseFolder()
    {
        const QString d = ask(QFileDialog::Directory,
                              "Choose the folder of the extracted disc (with default.xbe)",
                              QString());
        if (!d.isEmpty())
            install(d);
    }

    /* The install's progress, from the worker thread. */
    static void progress(uint64_t done, uint64_t total, void *ud)
    {
        auto *self = static_cast<Setup *>(ud);
        const int permille = total ? int(done * 1000 / total) : -1;
        if (permille == self->m_permille)
            return;
        self->m_permille = permille;
        QMetaObject::invokeMethod(self, [self, permille, done] {
            if (permille < 0) {
                self->m_status->setText("Unpacking the archive. This needs some free "
                                        "space for a while...");
                self->m_bar->setRange(0, 0);
                return;
            }
            self->m_status->setText(QString("Installing the game... %1 MB")
                                        .arg(qulonglong(done >> 20)));
            self->m_bar->setRange(0, 1000);
            self->m_bar->setValue(permille);
            self->m_bar->setFormat(QString("%1%").arg(permille / 10));
        }, Qt::QueuedConnection);
    }

    void install(const QString &src)
    {
        const QFileInfo fi(src);
        if (fi.isFile() && fi.suffix().compare("xbe", Qt::CaseInsensitive) != 0) {
            /* Room for the unpacked game (and the image, from an archive). */
            QDir parent(QFileInfo(m_installTo).absolutePath());
            while (!parent.exists() && parent.cdUp())
                ;
            const qint64 need = (fi.suffix().compare("iso", Qt::CaseInsensitive) == 0
                                 || fi.suffix().compare("xiso", Qt::CaseInsensitive) == 0)
                                    ? (5ll << 30) : (13ll << 30);
            const QStorageInfo st(parent.absolutePath());
            if (st.isValid() && st.bytesAvailable() > 0 && st.bytesAvailable() < need
                    && QMessageBox::question(this, "Conker",
                           QString("There are %1 GB free in %2, and installing needs "
                                   "about %3 GB. Try anyway?")
                               .arg(st.bytesAvailable() >> 30)
                               .arg(homeShort(parent.absolutePath()))
                               .arg(need >> 30)) != QMessageBox::Yes)
                return;
        }

        m_pages->setCurrentIndex(1);
        m_status->setText("Reading " + fi.fileName() + "...");
        m_bar->setRange(0, 0);
        m_cancel->setEnabled(true);
        m_permille = -2;

        const QByteArray from = QFile::encodeName(src);
        const QByteArray to = QFile::encodeName(m_installTo);
        m_worker = QThread::create([this, from, to] {
            char out[4096];
            conker_install_set_progress(progress, this);
            const int rc = conker_install(from.constData(), to.constData(), out, sizeof out);
            const QString err = QString::fromLocal8Bit(conker_install_error());
            const QString dir = QFile::decodeName(out);
            QMetaObject::invokeMethod(this, [this, rc, err, dir] { finished(rc, err, dir); },
                                      Qt::QueuedConnection);
        });
        m_worker->start();
    }

    void finished(int rc, const QString &err, const QString &dir)
    {
        m_worker->wait();
        delete m_worker;
        m_worker = nullptr;
        if (rc == 0) {
            m_gameDir = dir;
            close();
            return;
        }
        if (m_closing) {
            close();
            return;
        }
        m_pages->setCurrentIndex(0);
        if (err != "Cancelled.")
            QMessageBox::warning(this, "Conker", "The game could not be installed.\n\n" + err);
    }

    QString m_installTo, m_gameDir;
    QStackedWidget *m_pages;
    QLabel *m_status;
    QProgressBar *m_bar;
    QPushButton *m_cancel;
    QThread *m_worker = nullptr;
    int m_permille = -2;
    bool m_closing = false;
};

} // namespace

int main(int argc, char **argv)
{
    QApplication app(argc, argv);
    QApplication::setApplicationName("Conker: Live & Reloaded");
    QApplication::setDesktopFileName("conker-recomp");

    const QStringList args = app.arguments();
    const int at = args.indexOf("--install-to");
    if (at < 0 || at + 1 >= args.size() || args[at + 1].isEmpty()) {
        std::fprintf(stderr, "usage: conker-setup --install-to <dir>\n");
        return 2;
    }

    Setup w(args[at + 1]);
    w.show();

    const QByteArray shot = qgetenv("CONKER_SETUP_SHOT");
    if (!shot.isEmpty()) {
        auto *t = new QTimer(&w);
        QObject::connect(t, &QTimer::timeout, &w, [&w, shot] {
            static int n;
            w.grab().save(QString("%1-%2.png").arg(QString::fromLocal8Bit(shot)).arg(n++));
        });
        t->start(1000);
    }
    const QByteArray autoSrc = qgetenv("CONKER_SETUP_AUTO");
    if (!autoSrc.isEmpty())
        QTimer::singleShot(1500, &w, [&w, autoSrc] {
            w.installForTest(QFile::decodeName(autoSrc));
        });

    app.exec();
    if (!w.done())
        return 1;
    std::printf("%s\n", QFile::encodeName(w.gameDir()).constData());
    return 0;
}
