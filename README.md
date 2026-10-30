# Conker: Live & Reloaded — static recompilation

![Status](https://img.shields.io/badge/status-alpha-f59e0b)
![Platform](https://img.shields.io/badge/platform-Linux%20%7C%20Steam%20Deck%20%7C%20Windows-2563eb)
![License](https://img.shields.io/badge/license-MIT-16a34a)

**[English](#english) · [Español](#español)**

> ⚠️ **Alpha.** Expect bugs, and keep a copy of your saves. / **Versión alfa.** Puede tener errores: guarda una copia de tus partidas.

---

## English

### What this is

A native PC version of **Conker: Live & Reloaded** for the original Xbox
(USA release), made by static recompilation. The game's x86 code
(`default.xbe`) is translated into C ahead of time and compiled into an
ordinary executable. That executable runs on
[xboxrecomp](https://github.com/sp00nznet/xboxrecomp), a runtime that
stands in for the Xbox: its kernel, the NV2A graphics chip, the audio
processor, the USB controllers and the hard disk. Nothing is emulated
instruction by instruction: the game's own code runs as native code.

The repository contains no game data. You need your own copy of the
game, which is installed the first time you run it.

### Status

**This project is in alpha:** it is playable, but expect bugs, and keep a
copy of your saves.

| Area | Status |
|---|---|
| Linux x86-64 | ✅ Builds and runs; released as an AppImage |
| Steam Deck | ✅ Tested in Game Mode: 30 fps at native 1X render, smooth after the first run |
| Windows x86-64 | ✅ Tested on Windows and under Proton/Wine; released as a zip |
| macOS | 🟡 Supported by the runtime, not yet built for this project |
| Game | ✅ Single-player playable from a new game through the first chapters; later chapters are little tested; multiplayer and Xbox Live are not supported |
| Graphics | ✅ Vulkan: everything is drawn on the GPU, including the game's vertex programs; render resolution 1X to 10X, 30/60/90/120 fps, widescreen |
| Videos, sound, saves, controller | ✅ Working |
| Languages | ✅ English, Spanish, French, German, Italian and Japanese menus and subtitles; voices stay in English |
| Metal renderer | 🔴 Not started |
| Known issues | The first run of each new version compiles its shaders and stutters in menus and loading screens; the CPU fallback renderer (no Vulkan) runs at about 3 fps and shows videos washed out |

### Quick start (AppImage)

1. Download `Conker-Recomp-<version>-x86_64.AppImage` from the
   [releases](https://github.com/Txukie/xboxrecomp-conker/releases), make it
   executable (`chmod +x`) and run it.
2. The first time, a setup window asks for your copy of the game: a disc
   image (`.iso` or `.xiso`, a full Redump dump, or the `.7z`/`.zip` holding
   it) or the folder of an extracted disc (with `default.xbe`). An image is
   installed once (about 4.5 GB) into `~/.local/share/conker-recomp/game`; a
   folder is used where it is and remembered. Only the USA version, the one
   the code was recompiled from, is accepted.
3. A game folder or image can also be given as the first argument or in
   `CONKER_GAME_DIR`, which skips the window.

The AppImage needs glibc 2.43 or newer (SteamOS 3.9 has it) and a Vulkan
1.3 driver. It carries its own SDL2, libepoxy, libcrypto, SPIRV-Tools, the
C++ runtime, and Qt 6 for the setup window; glibc, the Vulkan loader and
the GPU drivers are the system's.

On the **Steam Deck**, add the AppImage to Steam as a non-Steam game and
start it from Game Mode.

### Quick start (Windows)

Download `Conker-Recomp-<version>-windows-x86_64.zip` from the
[releases](https://github.com/Txukie/xboxrecomp-conker/releases), unpack it
and run `conker_recomp.exe`. The first time, it asks for your copy of the
game, as above. It needs 64-bit Windows 10 or later and a Vulkan 1.3 driver.
Everything is kept in `%LOCALAPPDATA%\ConkerRecomp`.

### Recomp Options

In the main menu, **Options** has a third entry under Vibration and Invert
Aim: **Recomp Options**. Up and down choose a setting; left, right or A
change it; B goes back. Changes apply immediately and are saved in
`~/.config/conker-recomp/settings.cfg` (`$XDG_CONFIG_HOME` if set).

| Setting | Values | Default |
|---|---|---|
| Language | English, Español, Français, Deutsch, Italiano, Japanese: menus and subtitles, from the disc's own text (voices stay in English). Applies at the next start | English |
| Display Mode | Windowed, Fullscreen, Borderless Fullscreen | Windowed |
| Aspect Ratio | 4:3, 16:9, 16:10, 21:9, 32:9 (Hor+: wider, not stretched; videos keep 4:3 with black bars) | 4:3 |
| Resolution | The sizes of the chosen aspect ratio: the monitor's modes and, except in Fullscreen, the usual sizes that fit the desktop | The window's default |
| Render Resolution | Original (1X) to 10X | 1X |
| VSync | On, Off | On |
| FPS Limit | 30, 60, 90, 120 (the game times its own frames, so it runs at the right speed above 30) | 30 |
| Allow Skip Cutscenes | Yes: holding LT for a second skips any cutscene, even one not seen before (scenes the game never lets you skip, such as the intro, stay as they are) | No |
| Swing Button | X: see below | Off |
| Weapon | Bat, Frying Pan: see below | Bat |
| Uncensor | Enable, Disable, Update: see below | — |

**Swing Button.** With X selected, X swings the weapon in one press, as
on the Nintendo 64, without the over-the-shoulder camera. The weapon comes
out quickly, Conker swings it the way he is facing (pressing again
continues the combo), and he keeps running the way the stick points, as
without it. The weapon goes away by itself after a moment without a
press, or at once when the right stick moves the camera. B and then RT
still work as always.

**Weapon.** Frying Pan gives Conker the frying pan he had on the Nintendo
64 in place of the bat, with the pan's hit sound. The remake only has the
pan in its training level; the first start with it chosen takes the pan's
model out of that level in your own copy of the game (into
`~/.local/share/conker-recomp/generated/pan`), so nothing of the game is
shipped. The change takes effect when the game is restarted.

**Uncensor** applies the [uncensor patch](https://gamebanana.com/mods/697391)
(text and audio). Enable downloads it from GameBanana the first time
(about 250 MB; on Linux it needs `curl`). Its text covers English, Spanish,
French and Italian; German and Japanese subtitles stay as they are, Disable turns
it off without deleting it, and Update looks for a new version. Changes
take effect when the game is restarted.

### Main menu

The pub starts on **Game 1**, and after that on the save slot last played.
The first title reads "Online & Co". B on any title asks "Do you want to
exit?" (No is picked; left and right choose, A answers, B is No); Yes
closes the game. Titles, including the save slots', and this question follow
the Language option.

Loading a level shows the game's own loading screen.

### Controls

Any controller SDL recognises works, including the Steam Deck's own. On
the keyboard, Enter is START and Z is A.

### Mods

Each folder in `~/.local/share/conker-recomp/mods/` is a mod, with the same
layout as the game folder (for example `mods/mymod/dvddata/aid/text/...`).
Its files replace the game's without modifying them. A mod with a file
named `.disabled` inside is off. When the set of active mods changes, the
game's cache (`saves/Cache`) is emptied at start.

### Where things are kept

| What | Where |
|---|---|
| Installed game | `~/.local/share/conker-recomp/game` |
| Saves | `~/.local/share/conker-recomp/saves` (second argument or `CONKER_SAVE_DIR` to change) |
| Mods | `~/.local/share/conker-recomp/mods` |
| Pipelines seen, rebuilt at each start | `~/.local/share/conker-recomp/pipelines.bin` |
| Settings | `~/.config/conker-recomp/settings.cfg` |

### Building from source

Needed: GCC, CMake, Ninja, SDL2, libepoxy, OpenSSL, ffmpeg; for Vulkan the
Vulkan headers and loader and `glslc` (shaderc); for translating the
game's vertex programs on the GPU, glslang (static library) and
SPIRV-Tools; Qt 6 for the setup window (optional). On Arch:

```sh
sudo pacman -S --needed base-devel cmake ninja sdl2 libepoxy openssl ffmpeg \
    vulkan-headers vulkan-icd-loader shaderc glslang spirv-tools qt6-base
```

```sh
git clone --recurse-submodules https://github.com/Txukie/xboxrecomp-conker
cd xboxrecomp-conker
cmake -S work/conker/project -B work/conker/project/build -G Ninja -DCMAKE_BUILD_TYPE=Release
cmake --build work/conker/project/build
RECOMP_FB_WINDOW=1 ./work/conker/run_conker.sh /path/to/Conker
cmake --build work/conker/project/build --target appimage   # -> appimage/
```

Use a Release build: at `-O0` the recompiled code is many times slower.
The project version is `project(conker_recomp VERSION …)` in
`work/conker/project/CMakeLists.txt`; the executable prints it at start.
Without glslang, vertex programs run in a slower interpreter shader;
without Vulkan, the CPU renderer draws.

The Windows build is cross-compiled on Linux with MinGW-w64: see
[work/conker/packaging/windows/README.md](work/conker/packaging/windows/README.md).

### Useful environment variables

| Variable | Effect |
|---|---|
| `CONKER_GAME_DIR`, `CONKER_SAVE_DIR` | Game and save locations |
| `CONKER_ASPECT=16:9` | Aspect ratio at start (also `16:10`, `21:9` or a number) |
| `RECOMP_RENDERER=cpu` | Draw on the CPU instead of Vulkan |
| `RECOMP_VK_SCALE=<n>` | Render resolution at start |
| `RECOMP_FLIP_PACING=0` | No vblank pacing (uncapped) |
| `RECOMP_VIDEO_STRETCH=1` | Stretch videos instead of keeping 4:3 |
| `RECOMP_VK_VERBOSE=1` | Renderer statistics, and a line for every frame over 50 ms |
| `RECOMP_VK_VALIDATE=1` | Vulkan validation layers |

The rest are listed in
[work/conker/README.md](work/conker/README.md) and in the toolkit's
headers.

### How it works

- **Recompiled code.** xboxrecomp's recompiler lifts the 20,029 functions
  of `default.xbe` into C (`work/conker/project/src/recomp/gen/`).
  `recomp_manual.c` replaces or hooks the few that need it.
- **Runtime.** The toolkit provides the Xbox kernel calls, memory layout,
  threads, files and saves, the USB controller model (OHCI), and the
  audio processor, with output through SDL2.
- **Graphics.** D3D8 is linked into the game, so it writes NV2A push
  buffers directly. The toolkit's executor walks them like the GPU would
  and hands each draw to the Vulkan renderer (`external/xboxrecomp/src/vulkan/`):
  - each of the game's vertex programs is translated to GLSL and compiled
    with glslang;
  - the register combiners become specialised fragment shaders;
  - pipelines are assembled from separately compiled parts
    (`VK_EXT_graphics_pipeline_library`), and every pipeline the game has
    used is rebuilt in the background at the next start.
- **Local toolkit changes.** These are kept as patches in
  `work/conker/patches/xboxrecomp/` and applied by CMake to the pinned
  submodule (v0.16.0). They are written to be sent upstream.

Technical notes and the plan for each platform:
[docs/technical/porting.md](docs/technical/porting.md).

### Repository layout

- `external/xboxrecomp/`: the toolkit (runtime, tools, documentation), a
  submodule pinned to a release.
- `work/conker/project/`: the Conker executable.
  - `src/`: start-up, settings and menu, the pub, Swing Button, Weapon
    (frying pan extraction), mods, first-launch setup, host code per OS,
    manual overrides.
  - `src/recomp/gen/`: the C generated from the XBE.
  - `gfx/`: an early set of graphics backends from the start of the port,
    not used by the game (the renderer in use lives in the toolkit).
- `work/conker/patches/xboxrecomp/`: local fixes to the toolkit.
- `work/conker/packaging/appimage/`: the AppImage's launcher, desktop entry,
  icon and build script.
- `work/conker/packaging/windows/`: the Windows zip's dependencies, icon and
  notes.
- `work/conker/regenerate.sh`: regenerates `src/recomp/gen/` from the XBE.
- `docs/technical/porting.md`: status and plans.

### Credits

- [Txukie](https://github.com/Txukie): project author.
- [codepdbh](https://github.com/codepdbh): contributions.
- [sp00nznet](https://github.com/sp00nznet): xboxrecomp, the toolkit this
  is built on.
- Claude (Anthropic), through Claude Code: co-author of the commits
  (`Co-Authored-By: Claude`), the reverse engineering, the toolkit patches
  and the releases.

### Legal

This repository contains no ISO, `default.xbe`, assets or saves from the
game; you must provide your own legally owned copy. The project is
experimental and is not affiliated with Microsoft, Rare or Xbox.
xboxrecomp includes code derived from xemu under the LGPL-2.1+; see
`external/xboxrecomp/NOTICE`.

---

## Español

### Qué es

Una versión nativa para PC de **Conker: Live & Reloaded**, de la Xbox
original (versión USA), hecha por recompilación estática. El código x86 del
juego (`default.xbe`) se traduce a C de antemano y se compila en un
ejecutable corriente. Ese ejecutable funciona sobre
[xboxrecomp](https://github.com/sp00nznet/xboxrecomp), un runtime que hace
las veces de la Xbox: su kernel, el chip gráfico NV2A, el procesador de
audio, los controladores USB y el disco duro. No se emula instrucción a
instrucción: el propio código del juego se ejecuta como código nativo.

El repositorio no contiene datos del juego. Necesitas tu propia copia, que
se instala la primera vez que lo abres.

### Estado

**Este proyecto está en fase alfa:** se puede jugar, pero puede tener errores;
guarda una copia de tus partidas.

| Área | Estado |
|---|---|
| Linux x86-64 | ✅ Compila y funciona; se publica como AppImage |
| Steam Deck | ✅ Probado en modo Juego: 30 fps a resolución original (1X), fluido desde la segunda vez que se abre |
| Windows x86-64 | ✅ Probado en Windows y con Proton/Wine; se publica como zip |
| macOS | 🟡 Soportado por el runtime, aún sin compilar para este proyecto |
| Juego | ✅ El modo de un jugador se puede jugar desde una partida nueva durante los primeros capítulos; los siguientes están poco probados; el multijugador y Xbox Live no funcionan |
| Gráficos | ✅ Vulkan: todo se dibuja en la GPU, también los vertex programs del juego; resolución de render de 1X a 10X, 30/60/90/120 fps, pantalla panorámica |
| Vídeos, sonido, partidas, mando | ✅ Funcionan |
| Idiomas | ✅ Menús y subtítulos en inglés, español, francés, alemán, italiano y japonés; las voces siguen en inglés |
| Renderizador Metal | 🔴 Sin empezar |
| Problemas conocidos | La primera vez que se abre cada versión nueva compila sus shaders y va a tirones en los menús y las cargas; el renderizador de reserva por CPU (sin Vulkan) va a unos 3 fps y muestra los vídeos lavados |

### Prueba rápida (AppImage)

1. Descarga `Conker-Recomp-<versión>-x86_64.AppImage` de las
   [releases](https://github.com/Txukie/xboxrecomp-conker/releases), dale
   permisos de ejecución (`chmod +x`) y ábrela.
2. La primera vez, una ventana pide tu copia del juego: una imagen de disco
   (`.iso` o `.xiso`, un volcado completo de Redump, o el `.7z`/`.zip` que la
   contiene) o la carpeta de un disco extraído (con `default.xbe`). Una
   imagen se instala una sola vez (unos 4,5 GB) en
   `~/.local/share/conker-recomp/game`; una carpeta se usa donde está y se
   recuerda. Solo se acepta la versión USA, la que se recompiló.
3. La carpeta o imagen del juego también se puede pasar como primer
   argumento o en `CONKER_GAME_DIR`, y entonces no aparece la ventana.

La AppImage necesita glibc 2.43 o posterior (SteamOS 3.9 la tiene) y un
driver Vulkan 1.3. Lleva su propio SDL2, libepoxy, libcrypto, SPIRV-Tools,
la librería de C++ y Qt 6 para la ventana de instalación; glibc, el cargador
de Vulkan y los drivers de la GPU son los del sistema.

En la **Steam Deck**, añade la AppImage a Steam como juego que no es de
Steam y ábrela desde el modo Juego.

### Prueba rápida (Windows)

Descarga `Conker-Recomp-<versión>-windows-x86_64.zip` de las
[releases](https://github.com/Txukie/xboxrecomp-conker/releases), descomprímelo
y abre `conker_recomp.exe`. La primera vez pide tu copia del juego, como
arriba. Necesita Windows 10 o posterior de 64 bits y un driver Vulkan 1.3. Todo
se guarda en `%LOCALAPPDATA%\ConkerRecomp`.

### Recomp Options

En el menú principal, **Options** tiene una tercera entrada bajo Vibration
e Invert Aim: **Recomp Options**. Arriba y abajo eligen un ajuste;
izquierda, derecha o A lo cambian; B vuelve. Los cambios se aplican al
momento y se guardan en `~/.config/conker-recomp/settings.cfg`
(`$XDG_CONFIG_HOME` si está definido).

| Ajuste | Valores | Por defecto |
|---|---|---|
| Language | English, Español, Français, Deutsch, Italiano, Japanese: menús y subtítulos, con el texto del propio disco (las voces siguen en inglés). Se aplica al volver a arrancar | English |
| Display Mode | Windowed, Fullscreen, Borderless Fullscreen | Windowed |
| Aspect Ratio | 4:3, 16:9, 16:10, 21:9, 32:9 (Hor+: más ancho, sin deformar; los vídeos conservan el 4:3 con barras negras) | 4:3 |
| Resolution | Los tamaños de la relación de aspecto elegida: los modos del monitor y, salvo en Fullscreen, los tamaños habituales que caben en el escritorio | La de la ventana por defecto |
| Render Resolution | Original (1X) a 10X | 1X |
| VSync | On, Off | On |
| FPS Limit | 30, 60, 90, 120 (el juego mide su propio tiempo por fotograma, así que por encima de 30 va a la velocidad correcta) | 30 |
| Allow Skip Cutscenes | Yes: mantener LT un segundo salta cualquier escena, aunque no se haya visto antes (las que el juego nunca deja saltar, como las de la introducción, siguen igual) | No |
| Swing Button | X: ver abajo | Off |
| Weapon | Bat, Frying Pan: ver abajo | Bat |
| Uncensor | Enable, Disable, Update: ver abajo | — |

**Swing Button.** Con X, el botón X golpea con el arma de una sola
pulsación, como en la Nintendo 64, sin la cámara sobre el hombro. El arma
sale enseguida, Conker golpea hacia donde mira (pulsar de nuevo sigue el
combo) y sigue corriendo hacia donde apunta el stick, como sin ella. El
arma se guarda sola al poco de dejar de pulsar, o en cuanto el stick
derecho mueve la cámara. B y luego RT siguen funcionando como siempre.

**Weapon.** Frying Pan le da a Conker la sartén que llevaba en la Nintendo
64 en lugar del bate, con el sonido de golpe de la sartén. El remake solo
tiene la sartén en su nivel de entrenamiento; el primer arranque con ella
elegida saca el modelo de la sartén de ese nivel de tu propia copia del
juego (a `~/.local/share/conker-recomp/generated/pan`), así que no se
distribuye nada del juego. El cambio se aplica al reiniciar el juego.

**Uncensor** aplica el [parche de descensura](https://gamebanana.com/mods/697391)
(textos y audio). Enable lo descarga de GameBanana la primera vez (unos
250 MB; en Linux hace falta `curl`). Su texto cubre inglés, español,
francés e italiano; los subtítulos en alemán y japonés se quedan como están, Disable lo
desactiva sin borrarlo y Update busca una versión nueva. Los cambios se
aplican al reiniciar el juego.

### Menú principal

El pub empieza en **Game 1** y, a partir de ahí, en la partida que se jugó
la última vez. El primer título dice "Online & Co". B en cualquier título
pregunta "Do you want to exit?" (con No elegido; izquierda y derecha
eligen, A responde, B es No); Yes cierra el juego. Los títulos, también los de
las partidas, y esta pregunta siguen la opción Language.

Al cargar un nivel aparece la pantalla de carga del propio juego.

### Controles

Funciona cualquier mando que reconozca SDL, incluidos los controles de la
Steam Deck. Con el teclado, Intro es START y Z es A.

### Mods

Cada carpeta en `~/.local/share/conker-recomp/mods/` es un mod, con la
misma estructura que la carpeta del juego (por ejemplo
`mods/mimod/dvddata/aid/text/...`). Sus archivos sustituyen a los del juego
sin modificarlos. Un mod con un archivo llamado `.disabled` dentro está
desactivado. Si cambia el conjunto de mods activos, al arrancar se vacía la
caché del juego (`saves/Cache`).

### Dónde se guarda cada cosa

| Qué | Dónde |
|---|---|
| Juego instalado | `~/.local/share/conker-recomp/game` |
| Partidas | `~/.local/share/conker-recomp/saves` (segundo argumento o `CONKER_SAVE_DIR` para cambiarlo) |
| Mods | `~/.local/share/conker-recomp/mods` |
| Pipelines usados, que se preparan en cada arranque | `~/.local/share/conker-recomp/pipelines.bin` |
| Ajustes | `~/.config/conker-recomp/settings.cfg` |

### Compilar desde el código

Hace falta: GCC, CMake, Ninja, SDL2, libepoxy, OpenSSL, ffmpeg; para Vulkan,
sus cabeceras y cargador y `glslc` (shaderc); para traducir los vertex
programs del juego en la GPU, glslang (librería estática) y SPIRV-Tools; Qt
6 para la ventana de instalación (opcional). En Arch:

```sh
sudo pacman -S --needed base-devel cmake ninja sdl2 libepoxy openssl ffmpeg \
    vulkan-headers vulkan-icd-loader shaderc glslang spirv-tools qt6-base
```

```sh
git clone --recurse-submodules https://github.com/Txukie/xboxrecomp-conker
cd xboxrecomp-conker
cmake -S work/conker/project -B work/conker/project/build -G Ninja -DCMAKE_BUILD_TYPE=Release
cmake --build work/conker/project/build
RECOMP_FB_WINDOW=1 ./work/conker/run_conker.sh /ruta/a/Conker
cmake --build work/conker/project/build --target appimage   # -> appimage/
```

Usa una compilación Release: con `-O0` el código recompilado es muchas
veces más lento. La versión está en `project(conker_recomp VERSION …)` de
`work/conker/project/CMakeLists.txt`, y el ejecutable la muestra al
arrancar. Sin glslang, los vertex programs se ejecutan en un shader
intérprete más lento; sin Vulkan, dibuja la CPU.

La versión de Windows se compila desde Linux con MinGW-w64: consulta
[work/conker/packaging/windows/README.md](work/conker/packaging/windows/README.md).

### Variables de entorno útiles

| Variable | Efecto |
|---|---|
| `CONKER_GAME_DIR`, `CONKER_SAVE_DIR` | Ubicación del juego y de las partidas |
| `CONKER_ASPECT=16:9` | Proporción al arrancar (también `16:10`, `21:9` o un número) |
| `RECOMP_RENDERER=cpu` | Dibujar con la CPU en vez de con Vulkan |
| `RECOMP_VK_SCALE=<n>` | Resolución de render al arrancar |
| `RECOMP_FLIP_PACING=0` | Sin sincronía con el vblank (sin límite) |
| `RECOMP_VIDEO_STRETCH=1` | Estirar los vídeos en vez de conservar el 4:3 |
| `RECOMP_VK_VERBOSE=1` | Estadísticas del renderizador, y una línea por cada fotograma de más de 50 ms |
| `RECOMP_VK_VALIDATE=1` | Capas de validación de Vulkan |

Las demás están en [work/conker/README.md](work/conker/README.md) y en las
cabeceras del toolkit.

### Cómo funciona

- **Código recompilado.** El recompilador de xboxrecomp convierte las
  20.029 funciones de `default.xbe` en C (`work/conker/project/src/recomp/gen/`).
  `recomp_manual.c` sustituye o engancha las pocas que lo necesitan.
- **Runtime.** El toolkit aporta las llamadas al kernel de la Xbox, el mapa
  de memoria, los hilos, los archivos y las partidas, el modelo de los
  controladores USB (OHCI) y el procesador de audio, con la salida por SDL2.
- **Gráficos.** D3D8 va enlazado dentro del juego, así que este escribe
  directamente push buffers del NV2A. El ejecutor del toolkit los recorre
  como lo haría la GPU y pasa cada dibujo al renderizador Vulkan
  (`external/xboxrecomp/src/vulkan/`):
  - cada vertex program del juego se traduce a GLSL y se compila con
    glslang;
  - los register combiners se convierten en fragment shaders
    especializados;
  - los pipelines se montan a partir de partes compiladas por separado
    (`VK_EXT_graphics_pipeline_library`), y todos los que el juego ha usado
    se preparan en segundo plano en el siguiente arranque.
- **Cambios locales en el toolkit.** Se guardan como parches en
  `work/conker/patches/xboxrecomp/`, y CMake los aplica sobre el submódulo
  fijado (v0.16.0). Están escritos para enviarlos al proyecto original.

Notas técnicas y el plan para cada plataforma:
[docs/technical/porting.md](docs/technical/porting.md).

### Contenido del repositorio

- `external/xboxrecomp/`: el toolkit (runtime, herramientas,
  documentación), como submódulo fijado a una versión.
- `work/conker/project/`: el ejecutable de Conker.
  - `src/`: arranque, ajustes y menú, el pub, Swing Button, Weapon
    (extracción de la sartén), mods, instalación del primer arranque,
    código por sistema operativo, sustituciones manuales.
  - `src/recomp/gen/`: el C generado a partir del XBE.
  - `gfx/`: unos primeros backends gráficos del inicio del port, que el
    juego no usa (el renderizador en uso está en el toolkit).
- `work/conker/patches/xboxrecomp/`: correcciones locales al toolkit.
- `work/conker/packaging/appimage/`: el lanzador, la entrada de escritorio,
  el icono y el script de la AppImage.
- `work/conker/packaging/windows/`: las dependencias, el icono y las notas del
  zip de Windows.
- `work/conker/regenerate.sh`: regenera `src/recomp/gen/` a partir del XBE.
- `docs/technical/porting.md`: estado y planes.

### Créditos

- [Txukie](https://github.com/Txukie): autor del proyecto.
- [codepdbh](https://github.com/codepdbh): contribuciones.
- [sp00nznet](https://github.com/sp00nznet): xboxrecomp, el toolkit sobre
  el que está construido.
- Claude (Anthropic), mediante Claude Code: coautor de los commits
  (`Co-Authored-By: Claude`), del análisis del juego, de los parches del
  toolkit y de las versiones publicadas.

### Aviso legal

Este repositorio no incluye la ISO, `default.xbe`, assets ni partidas del
juego; debes aportar tu propia copia legal. El proyecto es experimental y
no está afiliado con Microsoft, Rare ni Xbox. xboxrecomp incluye código
derivado de xemu bajo LGPL-2.1+; ver `external/xboxrecomp/NOTICE`.
