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
    /* The first-run page and the pipeline build: drawn in its own lettering,
     * not the game's fonts, which is plain Latin, so no Japanese column. */
    { "ON THE HOUSE", "INVITA LA CASA", "OFFERT PAR LA MAISON", "AUFS HAUS", "OFFRE LA CASA", NULL },
    { "How do you take it? You can change all this later in Options > Recomp Options.",
      "Como lo quieres? Puedes cambiarlo luego en Opciones > Recomp Options.",
      "Comment le prenez-vous ? Modifiable ensuite dans Options > Recomp Options.",
      "Wie darf es sein? Spater anderbar unter Optionen > Recomp Options.",
      "Come lo vuoi? Puoi cambiarlo poi in Opzioni > Recomp Options.", NULL },
    { "Start the game", "Empezar el juego", "Lancer le jeu", "Spiel starten", "Avvia il gioco", NULL },
    { "Up/Down: choose   Left/Right: change   A or Enter: confirm",
      "Arriba/Abajo: elegir   Izquierda/Derecha: cambiar   A o Intro: confirmar",
      "Haut/Bas : choisir   Gauche/Droite : changer   A ou Entree : valider",
      "Hoch/Runter: wahlen   Links/Rechts: andern   A oder Enter: bestatigen",
      "Su/Giu: scegli   Sinistra/Destra: cambia   A o Invio: conferma", NULL },
    { "Unofficial fan project. Not affiliated with or endorsed by Microsoft or Rare.",
      "Proyecto no oficial de fans. Sin relacion ni respaldo de Microsoft o Rare.",
      "Projet de fans non officiel. Sans lien ni soutien de Microsoft ou Rare.",
      "Inoffizielles Fanprojekt. Nicht verbunden mit oder unterstutzt von Microsoft oder Rare.",
      "Progetto amatoriale non ufficiale. Non affiliato ne approvato da Microsoft o Rare.", NULL },
    { "Pouring the shaders", "Sirviendo los shaders", "On verse les shaders", "Shader werden gezapft", "Versando gli shader", NULL },
    { "This is quicker from the next start on.", "Sera mas rapido a partir del proximo inicio.",
      "Ce sera plus rapide au prochain lancement.", "Beim nachsten Start geht es schneller.",
      "Sara piu rapido dal prossimo avvio.", NULL },
    { "The language of the game and its menus.", "El idioma del juego y sus menus.",
      "La langue du jeu et de ses menus.", "Die Sprache des Spiels und der Menus.",
      "La lingua del gioco e dei menu.", NULL },
    { "A window, the whole screen, or the whole screen without changing its mode.",
      "Ventana, pantalla completa, o pantalla completa sin cambiar de modo.",
      "Fenetre, plein ecran, ou plein ecran sans changer de mode.",
      "Fenster, Vollbild, oder Vollbild ohne Moduswechsel.",
      "Finestra, schermo intero, o schermo intero senza cambiare modalita.", NULL },
    { "The shape of your screen. Wider shapes show more of the world.",
      "La forma de tu pantalla. Las mas anchas muestran mas del mundo.",
      "La forme de votre ecran. Plus large, on voit plus du monde.",
      "Die Form des Bildschirms. Breitere zeigen mehr von der Welt.",
      "La forma dello schermo. Piu larga mostra piu mondo.", NULL },
    { "The size of the window, or the screen mode.", "El tamano de la ventana o el modo de pantalla.",
      "La taille de la fenetre ou le mode d'ecran.", "Die Fenstergrosse oder der Bildschirmmodus.",
      "La dimensione della finestra o la modalita schermo.", NULL },
    { "Draws above the original 640x480. Higher is sharper and asks more of the GPU.",
      "Dibuja por encima de los 640x480 originales. Mas alto es mas nitido y exige mas a la GPU.",
      "Dessine au-dela des 640x480 d'origine. Plus haut, plus net et plus exigeant.",
      "Rendert uber den originalen 640x480. Hoher ist scharfer und fordert die GPU mehr.",
      "Disegna oltre i 640x480 originali. Piu alto e piu nitido e chiede di piu alla GPU.", NULL },
    { "Waits for the screen, which stops tearing.", "Espera a la pantalla, lo que evita el tearing.",
      "Attend l'ecran, ce qui evite les dechirures.", "Wartet auf den Bildschirm, das verhindert Tearing.",
      "Aspetta lo schermo, evitando il tearing.", NULL },
    { "30 is the console's rate.", "30 es la velocidad de la consola.", "30 est la cadence de la console.",
      "30 ist die Rate der Konsole.", "30 e la frequenza della console.", NULL },
    { "Hold LT to skip any cutscene, even one you have not seen.",
      "Manten LT para saltar cualquier escena, aunque no la hayas visto.",
      "Maintenez LT pour passer une scene, meme jamais vue.",
      "LT halten uberspringt jede Szene, auch ungesehene.",
      "Tieni LT per saltare ogni filmato, anche mai visto.", NULL },
    { "The attack mode as you remember it from the N64",
      "El modo de ataque tal como lo recuerdas de la N64",
      "Le mode d'attaque tel que vous vous en souvenez sur N64",
      "Der Angriffsmodus, wie du ihn vom N64 kennst",
      "La modalita di attacco come la ricordi dal N64", NULL },
    { "The weapon as you remember it from the N64",
      "El arma tal como la recuerdas de la N64",
      "L'arme telle que vous vous en souvenez sur N64",
      "Die Waffe, wie du sie vom N64 kennst",
      "L'arma come la ricordi dal N64", NULL },
    { "The prologue as you remember it from the N64",
      "El prologo tal como lo recuerdas de la N64",
      "Le prologue tel que vous vous en souvenez sur N64",
      "Der Prolog, wie du ihn vom N64 kennst",
      "Il prologo come lo ricordi dal N64", NULL },
    { "Downloads a patch made by others, separate from this project. Applies at the next start.",
      "Descarga un parche de terceros, ajeno a este proyecto. Se aplica en el proximo inicio.",
      "Telecharge un correctif de tiers, distinct de ce projet. Applique au prochain lancement.",
      "Ladt einen Patch von Dritten, getrennt von diesem Projekt. Gilt ab dem nachsten Start.",
      "Scarica una patch di terzi, separata da questo progetto. Si applica al prossimo avvio.", NULL },
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
    { "Intro Fix", "Arreglo de intro", "Correctif intro", "Intro-Fix", "Correzione intro", "イントロフィックス" },
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
            case CONKER_LANG_JAPANESE: return k_text[i].ja ? k_text[i].ja : en;
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
