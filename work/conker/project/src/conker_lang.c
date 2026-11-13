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
    /* The launcher and the pipeline build: drawn in its own lettering,
     * not the game's fonts, which is plain Latin, so no Japanese column. */
    { "ON THE HOUSE", "INVITA LA CASA", "OFFERT PAR LA MAISON", "AUFS HAUS", "OFFRE LA CASA", NULL },
    { "Start the game", "Empezar el juego", "Lancer le jeu", "Spiel starten", "Avvia il gioco", NULL },
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
    { "FSR 1 sharpens the picture up to the window's size when Render Resolution is below it.",
      "FSR 1 escala la imagen al tamano de la ventana cuando la resolucion interna es menor.",
      "FSR 1 agrandit l'image a la taille de la fenetre si la resolution interne est plus petite.",
      "FSR 1 skaliert das Bild auf Fenstergrosse, wenn die interne Auflosung kleiner ist.",
      "FSR 1 scala l'immagine alla finestra quando la risoluzione interna e minore.", NULL },
    { "Smooths the edges of everything drawn. Higher asks more of the GPU.",
      "Suaviza los bordes de todo lo dibujado. Mas alto exige mas a la GPU.",
      "Adoucit les bords de tout ce qui est dessine. Plus haut, plus exigeant.",
      "Glattet die Kanten von allem Gezeichneten. Hoher fordert die GPU mehr.",
      "Ammorbidisce i bordi di tutto. Piu alto chiede di piu alla GPU.", NULL },
    { "Smooths the edges of the finished picture, at little cost. Works with MSAA.",
      "Suaviza los bordes de la imagen final con poco coste. Combina con MSAA.",
      "Adoucit les bords de l'image finale, a faible cout. Va avec le MSAA.",
      "Glattet die Kanten des fertigen Bildes, gunstig. Geht mit MSAA.",
      "Ammorbidisce i bordi dell'immagine finale, con poco costo. Va con MSAA.", NULL },
    { "Keeps textures sharp when seen at an angle, like floors and roads.",
      "Mantiene nitidas las texturas vistas en angulo, como suelos y caminos.",
      "Garde les textures nettes vues de biais, comme les sols et les routes.",
      "Halt Texturen auch schrag gesehen scharf, wie Boden und Wege.",
      "Mantiene nitide le texture viste di sbieco, come pavimenti e strade.", NULL },
    { "Uses finer versions of distant textures. Higher is sharper but may shimmer.",
      "Usa versiones mas finas de las texturas lejanas. Mas alto es mas nitido pero puede parpadear.",
      "Utilise des textures lointaines plus fines. Plus net, mais peut scintiller.",
      "Nutzt feinere Fassungen ferner Texturen. Scharfer, kann aber flimmern.",
      "Usa versioni piu fini delle texture lontane. Piu nitido ma puo sfarfallare.", NULL },
    { "Keeps the detailed character models farther away. Max: at any distance.",
      "Mantiene los modelos detallados de los personajes mas lejos. Max: a cualquier distancia.",
      "Garde les modeles detailles des personnages plus loin. Max : a toute distance.",
      "Behalt die detaillierten Figurenmodelle weiter weg. Max: auf jede Entfernung.",
      "Mantiene i modelli dettagliati dei personaggi piu lontano. Max: a ogni distanza.", NULL },
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
    { "A patch made by others, separate from this project. A carries out the choice.",
      "Un parche de terceros, ajeno a este proyecto. A aplica la eleccion.",
      "Un correctif de tiers, distinct de ce projet. A applique le choix.",
      "Ein Patch von Dritten, getrennt von diesem Projekt. A fuhrt die Wahl aus.",
      "Una patch di terzi, separata da questo progetto. A applica la scelta.", NULL },
    /* The launcher's tabs, rows and buttons */
    { "Graphics", "Graficos", "Graphismes", "Grafik", "Grafica", NULL },
    { "Audio & Language", "Audio e idioma", "Audio et langue", "Audio und Sprache", "Audio e lingua", NULL },
    { "Mods", "Mods", "Mods", "Mods", "Mod", NULL },
    { "Controller", "Mando", "Manette", "Controller", "Controller", NULL },
    { "Monitor", "Monitor", "Ecran", "Bildschirm", "Monitor", NULL },
    { "Audio Device", "Dispositivo de audio", "Sortie audio", "Audiogerat", "Dispositivo audio", NULL },
    { "Master Volume", "Volumen general", "Volume general", "Gesamtlautstarke", "Volume generale", NULL },
    { "Player 1 Controller", "Mando del jugador 1", "Manette du joueur 1", "Controller Spieler 1", "Controller giocatore 1", NULL },
    { "Player 2 Controller", "Mando del jugador 2", "Manette du joueur 2", "Controller Spieler 2", "Controller giocatore 2", NULL },
    { "Buttons For", "Botones de", "Boutons du", "Tasten von", "Tasti del", NULL },
    { "Reset Buttons", "Restablecer botones", "Boutons par defaut", "Tasten zurucksetzen", "Ripristina tasti", NULL },
    { "Mods Folder", "Carpeta de mods", "Dossier des mods", "Mod-Ordner", "Cartella mod", NULL },
    { "Black", "Negro", "Noir", "Schwarz", "Nero", NULL },
    { "White", "Blanco", "Blanc", "Weiss", "Bianco", NULL },
    { "Left Trigger", "Gatillo izquierdo", "Gachette gauche", "Linker Trigger", "Grilletto sinistro", NULL },
    { "Right Trigger", "Gatillo derecho", "Gachette droite", "Rechter Trigger", "Grilletto destro", NULL },
    { "Left Stick Click", "Pulsar stick izquierdo", "Clic stick gauche", "Linker Stick Klick", "Clic levetta sinistra", NULL },
    { "Right Stick Click", "Pulsar stick derecho", "Clic stick droit", "Rechter Stick Klick", "Clic levetta destra", NULL },
    { "Default", "Predeterminado", "Par defaut", "Standard", "Predefinito", NULL },
    { " (unplugged)", " (desconectado)", " (debranche)", " (getrennt)", " (scollegato)", NULL },
    { "Auto", "Auto", "Auto", "Auto", "Auto", NULL },
    { "None", "Ninguno", "Aucune", "Keiner", "Nessuno", NULL },
    { "Keyboard only", "Solo teclado", "Clavier seul", "Nur Tastatur", "Solo tastiera", NULL },
    { "Player 1", "Jugador 1", "Joueur 1", "Spieler 1", "Giocatore 1", NULL },
    { "Player 2", "Jugador 2", "Joueur 2", "Spieler 2", "Giocatore 2", NULL },
    { "Open", "Abrir", "Ouvrir", "Offnen", "Apri", NULL },
    { "Press a button...", "Pulsa un boton...", "Appuyez sur un bouton...", "Taste drucken...", "Premi un tasto...", NULL },
    { "Quit", "Salir", "Quitter", "Beenden", "Esci", NULL },
    /* A pad's controls, by where they are */
    { "A (bottom)", "A (abajo)", "A (bas)", "A (unten)", "A (basso)", NULL },
    { "B (right)", "B (derecha)", "B (droite)", "B (rechts)", "B (destra)", NULL },
    { "X (left)", "X (izquierda)", "X (gauche)", "X (links)", "X (sinistra)", NULL },
    { "Y (top)", "Y (arriba)", "Y (haut)", "Y (oben)", "Y (alto)", NULL },
    { "D-Pad Up", "Cruceta arriba", "Croix haut", "Steuerkreuz oben", "Croce su", NULL },
    { "D-Pad Down", "Cruceta abajo", "Croix bas", "Steuerkreuz unten", "Croce giu", NULL },
    { "D-Pad Left", "Cruceta izquierda", "Croix gauche", "Steuerkreuz links", "Croce sinistra", NULL },
    { "D-Pad Right", "Cruceta derecha", "Croix droite", "Steuerkreuz rechts", "Croce destra", NULL },
    { "Left Stick Up", "Stick izq. arriba", "Stick gauche haut", "Linker Stick oben", "Levetta sin. su", NULL },
    { "Left Stick Down", "Stick izq. abajo", "Stick gauche bas", "Linker Stick unten", "Levetta sin. giu", NULL },
    { "Left Stick Left", "Stick izq. izquierda", "Stick gauche gauche", "Linker Stick links", "Levetta sin. sinistra", NULL },
    { "Left Stick Right", "Stick izq. derecha", "Stick gauche droite", "Linker Stick rechts", "Levetta sin. destra", NULL },
    { "Right Stick Up", "Stick der. arriba", "Stick droit haut", "Rechter Stick oben", "Levetta des. su", NULL },
    { "Right Stick Down", "Stick der. abajo", "Stick droit bas", "Rechter Stick unten", "Levetta des. giu", NULL },
    { "Right Stick Left", "Stick der. izquierda", "Stick droit gauche", "Rechter Stick links", "Levetta des. sinistra", NULL },
    { "Right Stick Right", "Stick der. derecha", "Stick droit droite", "Rechter Stick rechts", "Levetta des. destra", NULL },
    { "Share", "Compartir", "Partage", "Teilen", "Condividi", NULL },
    { "Touchpad", "Panel tactil", "Pave tactile", "Touchpad", "Touchpad", NULL },
    { "Paddle 1", "Paleta 1", "Palette 1", "Paddle 1", "Paletta 1", NULL },
    { "Paddle 2", "Paleta 2", "Palette 2", "Paddle 2", "Paletta 2", NULL },
    { "Paddle 3", "Paleta 3", "Palette 3", "Paddle 3", "Paletta 3", NULL },
    { "Paddle 4", "Paleta 4", "Palette 4", "Paddle 4", "Paletta 4", NULL },
    { "LB/RB: tab   Up/Down: choose   Left/Right: change   A: confirm   Start: play",
      "LB/RB: pestana   Arriba/Abajo: elegir   Izq./Der.: cambiar   A: confirmar   Start: jugar",
      "LB/RB : onglet   Haut/Bas : choisir   Gauche/Droite : changer   A : valider   Start : jouer",
      "LB/RB: Reiter   Hoch/Runter: wahlen   Links/Rechts: andern   A: bestatigen   Start: spielen",
      "LB/RB: scheda   Su/Giu: scegli   Sin./Des.: cambia   A: conferma   Start: gioca", NULL },
    { "The screen the game shows on.", "La pantalla donde se ve el juego.", "L'ecran ou s'affiche le jeu.",
      "Der Bildschirm, auf dem das Spiel lauft.", "Lo schermo su cui appare il gioco.", NULL },
    { "Where the sound goes. Default follows the system's choice.",
      "Por donde sale el sonido. Predeterminado sigue al sistema.",
      "Ou va le son. Par defaut suit le choix du systeme.",
      "Wohin der Ton geht. Standard folgt dem System.",
      "Dove va il suono. Predefinito segue il sistema.", NULL },
    { "Everything at once. Music, effects and speech have their own in the game's Options.",
      "Todo a la vez. Musica, efectos y voces tienen el suyo en las Opciones del juego.",
      "Tout a la fois. Musique, effets et voix ont le leur dans les Options du jeu.",
      "Alles zugleich. Musik, Effekte und Sprache haben eigene in den Optionen des Spiels.",
      "Tutto insieme. Musica, effetti e voci hanno il loro nelle Opzioni del gioco.", NULL },
    { "The controller of player 1. The keyboard works for player 1 too.",
      "El mando del jugador 1. El teclado tambien vale para el jugador 1.",
      "La manette du joueur 1. Le clavier marche aussi pour le joueur 1.",
      "Der Controller von Spieler 1. Die Tastatur geht auch fur Spieler 1.",
      "Il controller del giocatore 1. Anche la tastiera vale per il giocatore 1.", NULL },
    { "The controller of player 2, for split-screen multiplayer.",
      "El mando del jugador 2, para el multijugador a pantalla partida.",
      "La manette du joueur 2, pour le multijoueur en ecran partage.",
      "Der Controller von Spieler 2, fur den Splitscreen-Mehrspieler.",
      "Il controller del giocatore 2, per il multigiocatore a schermo diviso.", NULL },
    { "Whose buttons the rows below change.", "De quien son los botones que cambian las filas de abajo.",
      "A qui sont les boutons que changent les lignes en dessous.",
      "Wessen Tasten die Zeilen darunter andern.", "Di chi sono i tasti che cambiano le righe sotto.", NULL },
    { "Left/Right: pick the button. A: then press it on the controller.",
      "Izq./Der.: elige el boton. A: y pulsalo en el mando.",
      "Gauche/Droite : choisir le bouton. A : puis appuyez dessus sur la manette.",
      "Links/Rechts: Taste wahlen. A: dann am Controller drucken.",
      "Sin./Des.: scegli il tasto. A: poi premilo sul controller.", NULL },
    { "Every button back where the controller has it.",
      "Cada boton vuelve a su sitio en el mando.",
      "Chaque bouton revient a sa place sur la manette.",
      "Jede Taste wieder dort, wo der Controller sie hat.",
      "Ogni tasto torna dove lo ha il controller.", NULL },
    { "A mod you added: a folder in the Mods Folder. Applies when the game starts.",
      "Un mod que anadiste: una carpeta en la carpeta de mods. Se aplica al empezar el juego.",
      "Un mod ajoute : un dossier du dossier des mods. Applique au lancement du jeu.",
      "Ein Mod von dir: ein Ordner im Mod-Ordner. Gilt beim Spielstart.",
      "Un mod aggiunto: una cartella nella cartella mod. Si applica all'avvio del gioco.", NULL },
    { "Put each mod in a folder of its own here, shaped like the game's files.",
      "Pon cada mod en su propia carpeta aqui, con la forma de los archivos del juego.",
      "Mettez chaque mod dans son propre dossier ici, comme les fichiers du jeu.",
      "Jeden Mod in einen eigenen Ordner hier, aufgebaut wie die Spieldateien.",
      "Metti ogni mod in una sua cartella qui, come i file del gioco.", NULL },
    /* Rows */
    { "Language", "Idioma", "Langue", "Sprache", "Lingua", "ランゲージ" },
    { "Display Mode", "Modo de pantalla", "Mode d'affichage", "Anzeigemodus", "Modalità schermo", "ディスプレイモード" },
    { "Aspect Ratio", "Relación de aspecto", "Format d'image", "Seitenverhältnis", "Proporzioni", "アスペクト" },
    { "Resolution", "Resolución", "Résolution", "Auflösung", "Risoluzione", "レゾリューション" },
    { "Render Resolution", "Resolución interna", "Résolution interne", "Interne Auflösung", "Risoluzione interna", "レンダリングサイズ" },
    { "Upscaling", "Reescalado", "Mise à l'échelle", "Hochskalierung", "Upscaling", "アップスケール" },
    { "MSAA", "MSAA", "MSAA", "MSAA", "MSAA", "MSAA" },
    { "SMAA", "SMAA", "SMAA", "SMAA", "SMAA", "SMAA" },
    { "Anisotropic Filtering", "Filtro anisotrópico", "Filtrage anisotrope", "Anisotrope Filterung",
      "Filtro anisotropico", "アニソトロピック" },
    { "Texture Detail", "Detalle de texturas", "Détail des textures", "Texturdetails",
      "Dettaglio texture", "テクスチャディテール" },
    { "Model Detail", "Detalle de modelos", "Détail des modèles", "Modelldetails",
      "Dettaglio modelli", "モデルディテール" },
    { "VSync", "VSync", "VSync", "VSync", "VSync", "VSync" },
    { "Frame Rate", "Fotogramas/s", "Images/s", "Bildrate", "Frame rate", "フレームレート" },
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
    { "Normal", "Normal", "Normal", "Normal", "Normale", "ノーマル" },
    { "High", "Alto", "Haut", "Hoch", "Alto", "ハイ" },
    { "Very High", "Muy alto", "Très haut", "Sehr hoch", "Molto alto", "ベリーハイ" },
    { "Max", "Máx.", "Max", "Max", "Max", "マックス" },
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
