/*
 * The language of what this port adds to the game's menus. The game brings
 * its own text and fonts for the language the console says it has
 * (xbox_SetLanguage, read once at its start, so a change applies at the next
 * launch); these strings follow that same language, never the one still only
 * chosen, because the fonts in memory are that language's.
 *
 * A string is looked up by its English text. Words the game has its own
 * translation of (Yes, No, On, Off, its page titles) use the game's, from
 * aid/text/<language>/UIFrontend and UIPause. Every character here has to be
 * in that language's title font, aid/font/FrontendTitle[Japanese], which draws
 * the menu pages: it holds only what the game's titles use, so the Japanese
 * column is mostly katakana (370 characters, few kanji). Only Loading... is
 * drawn in the larger text font.
 */
#include <string.h>

#include "conker_settings.h"

static const struct {
    const char *en, *es, *fr, *de, *it, *ja;
} k_text[] = {
    /* Rows */
    { "Language", "Idioma", "Langue", "Sprache", "Lingua", "ランゲージ" },
    { "Display Mode", "Modo de pantalla", "Mode d'affichage", "Anzeigemodus", "Modalità schermo", "ディスプレイモード" },
    { "Aspect Ratio", "Relación de aspecto", "Format d'image", "Seitenverhältnis", "Proporzioni", "アスペクト" },
    { "Resolution", "Resolución", "Résolution", "Auflösung", "Risoluzione", "レゾリューション" },
    { "Render Resolution", "Resolución interna", "Résolution interne", "Interne Auflösung", "Risoluzione interna", "レンダリングサイズ" },
    { "VSync", "VSync", "VSync", "VSync", "VSync", "VSync" },
    { "FPS Limit", "Límite de FPS", "Limite de FPS", "FPS-Limit", "Limite FPS", "FPS リミット" },
    { "Allow Skip Cutscenes", "Saltar escenas", "Passer les scènes", "Szenen überspringen", "Salta filmati", "ムービーのスキップ" },
    { "Swing Button", "Botón de golpe", "Bouton de frappe", "Schlagtaste", "Tasto colpo", "スイングボタン" },
    { "Weapon", "Arma", "Arme", "Waffe", "Arma", "ウェポン" },
    { "Uncensor", "Sin censura", "Sans censure", "Unzensiert", "Senza censura", "アンセンサー" },
    /* Values */
    { "Japanese", "Japanese", "Japanese", "Japanese", "Japanese", "ニホンゴ" },
    { "Español", "Español", "Español", "Español", "Español", "Espanol" },
    { "Français", "Français", "Français", "Français", "Français", "Francais" },
    { "Windowed", "Ventana", "Fenêtré", "Fenster", "Finestra", "ウィンドウ" },
    { "Fullscreen", "Pantalla completa", "Plein écran", "Vollbild", "Schermo intero", "フルスクリーン" },
    { "Borderless Fullscreen", "Completa sin bordes", "Plein écran sans bord", "Randloses Vollbild", "Intero senza bordi", "ボーダーレス" },
    { "Original (1X)", "Original (1X)", "Original (1X)", "Original (1X)", "Originale (1X)", "オリジナル（1X）" },
    { "On", "Activado", "Activé", "Ein", "Attivato", "オン" },
    { "Off", "Desactivado", "Désactivé", "Aus", "Disattivato", "オフ" },
    { "Yes", "Sí", "Oui", "Ja", "Sì", "はい" },
    { "No", "No", "Non", "Nein", "No", "いいえ" },
    { "Bat", "Bate", "Batte", "Schläger", "Mazza", "バット" },
    { "Frying Pan", "Sartén", "Poêle", "Bratpfanne", "Padella", "フライパン" },
    { " (restart)", " (reiniciar)", " (redémarrer)", " (Neustart)", " (riavvia)", "（再起動）" },
    { " (failed)", " (error)", " (échec)", " (Fehler)", " (errore)", "（エラー）" },
    { "Disable", "Desactivar", "Désactiver", "Deaktivieren", "Disattiva", "オフ" },
    { "Enable", "Activar", "Activer", "Aktivieren", "Attiva", "オン" },
    { "Update", "Actualizar", "Mettre à jour", "Aktualisieren", "Aggiorna", "アップデート" },
    /* What Uncensor is doing (conker_mods.c) */
    { "Checking...", "Comprobando...", "Vérification...", "Prüfen...", "Controllo...", "チェック中..." },
    { "Downloading 0%%", "Descargando 0%%", "Téléchargement 0%%", "Download 0%%", "Download 0%%", "ダウンロード中 0%%" },
    { "Downloading %llu%%", "Descargando %llu%%", "Téléchargement %llu%%", "Download %llu%%", "Download %llu%%", "ダウンロード中 %llu%%" },
    { "Downloading %lluMB", "Descargando %lluMB", "Téléchargement %lluMB", "Download %lluMB", "Download %lluMB", "ダウンロード中 %lluMB" },
    { "Verifying...", "Verificando...", "Vérification...", "Überprüfen...", "Verifica...", "チェック中..." },
    { "Unpacking...", "Descomprimiendo...", "Extraction...", "Entpacken...", "Estrazione...", "インストール中..." },
    { "No connection", "Sin conexión", "Pas de connexion", "Keine Verbindung", "Nessuna connessione", "接続なし" },
    { "Bad reply", "Respuesta no válida", "Réponse incorrecte", "Ungültige Antwort", "Risposta non valida", "エラー" },
    { "No download found", "Descarga no encontrada", "Téléchargement introuvable", "Kein Download gefunden", "Download non trovato", "ダウンロードなし" },
    { "Restart to apply", "Reinicia para aplicar", "Redémarrer pour appliquer", "Neustart erforderlich", "Riavvia per applicare", "再起動してください" },
    { "Up to date", "Actualizado", "À jour", "Aktuell", "Aggiornato", "最新" },
    { "Download failed", "Error de descarga", "Échec du téléchargement", "Download fehlgeschlagen", "Download non riuscito", "ダウンロードエラー" },
    { "Bad download", "Descarga dañada", "Fichier endommagé", "Download beschädigt", "Download danneggiato", "ファイル破損" },
    { "Need bsdtar or 7z", "Necesita bsdtar o 7z", "bsdtar ou 7z requis", "bsdtar oder 7z nötig", "Serve bsdtar o 7z", "bsdtar か 7z が必要" },
    { "Install failed", "Error de instalación", "Échec de l'installation", "Installation fehlgeschlagen", "Installazione non riuscita", "インストールエラー" },
    /* The loading screen: the game's own TRANS_Loading. */
    { "Loading...", "Cargando...", "Chargement en cours...", "Laden ...", "Caricamento in corso...", "読み込み中..." },
    /* The pub and the Options page. Options, Chapters and & Co are the
     * game's own titles, as they read in its text. */
    { "Recomp Options", "Opciones Recomp", "Options Recomp", "Recomp-Optionen", "Opzioni Recomp", "Recomp オプション" },
    { "Online", "En línea", "En ligne", "Online", "Online", "Online" },
    { "Do you want to exit?", "¿Quieres salir?", "Veux-tu quitter ?", "Spiel beenden?", "Vuoi uscire?", "ゲームを終了しますか？" },
    { "Options", "Opciones", "Options", "Optionen", "Opzioni", "Options" },
    { "Chapters", "Capítulos", "Chapitres", "Kapitel", "Capitoli", "Chapters" },
    { "& Co", "& Co", "& Co", "& Co.", "& Co", "& Co" },
};

static int s_lang;

void conker_lang_set(int language)
{
    s_lang = language;
}

const char *conker_tr(const char *en)
{
    size_t i;

    if (s_lang == CONKER_LANG_ENGLISH)
        return en;
    for (i = 0; i < sizeof k_text / sizeof k_text[0]; i++)
        if (!strcmp(k_text[i].en, en))
            switch (s_lang) {
            case CONKER_LANG_SPANISH:  return k_text[i].es;
            case CONKER_LANG_FRENCH:   return k_text[i].fr;
            case CONKER_LANG_GERMAN:   return k_text[i].de;
            case CONKER_LANG_ITALIAN:  return k_text[i].it;
            case CONKER_LANG_JAPANESE: return k_text[i].ja;
            default:                   return en;
            }
    return en;
}

int conker_utf8_next(const char **s)
{
    const unsigned char *p = (const unsigned char *)*s;
    int c = *p++;

    if (c >= 0xE0 && p[0] && p[1]) {
        c = (c & 0x0F) << 12 | (p[0] & 0x3F) << 6 | (p[1] & 0x3F);
        p += 2;
    } else if (c >= 0xC0 && p[0]) {
        c = (c & 0x1F) << 6 | (p[0] & 0x3F);
        p += 1;
    }
    *s = (const char *)p;
    return c;
}
