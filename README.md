# Conker: Live & Reloaded — static recompilation

> Bring-up experimental de **Conker para la Xbox original**, construido sobre
> [xboxrecomp](https://github.com/sp00nznet/xboxrecomp) y orientado a producir
> ejecutables nativos para Windows, Linux y macOS con Vulkan y Metal.

![Estado](https://img.shields.io/badge/estado-en%20desarrollo-f59e0b)
![Plataforma](https://img.shields.io/badge/plataforma-Windows%20%7C%20Linux%20%7C%20macOS-2563eb)
![Licencia](https://img.shields.io/badge/licencia-MIT-16a34a)

## Qué funciona hoy

| Área | Estado |
|---|---|
| Análisis del XBE de Conker | ✅ 27 secciones cargadas |
| Runtime | ✅ xboxrecomp v0.16.0 (submódulo) + parches locales en `work/conker/patches/xboxrecomp/` |
| Compilación Linux (GCC) | ✅ Ejecutable nativo, pruebas y AppImage |
| Compilación Windows / macOS | 🟡 Soportadas por el runtime, sin probar en este proyecto |
| Código recompilado | ✅ Regenerado con v0.16.0 (20.029 funciones, 20 sin resolver) |
| Vídeo de introducción, menús, perfiles | ✅ Se ven y se controlan (teclado o mando) |
| Partida nueva (Game 1) | ✅ Llega a las escenas iniciales; el juego en sí está poco probado |
| Renderizado Vulkan | ✅ Píxeles y vertex programs en la GPU; 30 fps como en la consola, o hasta 60/90/120; resolución interna de 1X a 10X |
| Recomp Options | ✅ En Options del menú principal: modo de ventana, proporción, resolución, resolución de render, VSync y límite de fps; se guardan en `settings.cfg` |
| Pantalla panorámica | ✅ Recomp Options o `CONKER_ASPECT=16:9` (Hor+); los vídeos conservan su 4:3 con barras negras; los elementos 2D del menú se estiran |
| Vídeos (FMV) | ✅ Decodificación y colores comprobados contra ffmpeg con Vulkan |
| Backend Metal | 🔴 Todavía no |
| Problemas conocidos | Con el rasterizador de CPU los vídeos salen lavados; cargas de nivel lentas (~30 s); la emulación USB a veces deja de leer el mando |

## Prueba rápida

Necesitas una copia **extraída** de un disco que poseas legalmente (la carpeta
debe contener `default.xbe`; la ISO no se carga directamente, extráela por
ejemplo con `extract-xiso`).

```sh
git clone --recurse-submodules <este repositorio>
cmake -S work/conker/project -B work/conker/project/build -G Ninja -DCMAKE_BUILD_TYPE=Release
cmake --build work/conker/project/build
RECOMP_FB_WINDOW=1 ./work/conker/run_conker.sh /ruta/a/Conker   # Windows: run_conker.ps1
```

Usa una compilación Release: con `-O0` el código recompilado es muchas veces
más lento.

### AppImage (Linux)

```sh
cmake --build work/conker/project/build --target appimage
./appimage/Conker-Recomp-0.1.3-x86_64.AppImage /ruta/a/Conker
```

El objetivo deja la AppImage en `appimage/`, en la raíz del repositorio
(ignorada por git), con la versión del proyecto en el nombre. La versión está
en `project(conker_recomp VERSION …)` de `work/conker/project/CMakeLists.txt`,
y el ejecutable la muestra al arrancar.

La AppImage no contiene datos del juego. Sin argumento busca el disco extraído
en `CONKER_GAME_DIR` o en `~/.local/share/conker-recomp/game`. Las partidas se
guardan en `~/.local/share/conker-recomp/saves`. Abre la ventana y usa Vulkan
por defecto (si no hay un dispositivo Vulkan utilizable, dibuja la CPU).

Lleva SDL2, libepoxy y libcrypto; glibc, el cargador de Vulkan y los drivers de
la GPU son los del sistema. Como se compila en Arch, necesita glibc 2.43 o
posterior. Para distribuciones más antiguas hay que compilarla en una con una
glibc más vieja. `appimagetool` se toma del `PATH`; si no está, se descarga
la versión 1.9.0 y se comprueba su SHA-256.

### Controles y opciones

- **Recomp Options**: en el menú principal, Options tiene una tercera entrada
  bajo Vibration e Invert Aim. Con A se abren sus ajustes (arriba/abajo para
  elegir, izquierda/derecha o A para cambiar el valor, B para volver):
  Display Mode (Windowed, Fullscreen, Borderless Fullscreen), Aspect Ratio
  (4:3, 16:9, 16:10, 21:9, 32:9), Resolution (las del monitor), Render
  Resolution (Original (1X) a 10X, solo con Vulkan), VSync y FPS Limit (30,
  60, 90, 120). Se aplican al momento y se guardan en
  `~/.config/conker-recomp/settings.cfg` (`$XDG_CONFIG_HOME` si existe;
  `%LOCALAPPDATA%\ConkerRecomp` en Windows), que se lee al arrancar. Por
  encima de 30 fps el juego va a la velocidad correcta (mide su propio
  tiempo por fotograma); cuántos fps alcanza depende del equipo.
- Teclado (con la ventana abierta): Intro = START, Z = A; también sirven los
  mandos que reconoce SDL.
- `RECOMP_RENDERER`: `vulkan` (por defecto) dibuja en la GPU; si no hay un
  dispositivo Vulkan utilizable, o con `cpu`, dibuja la CPU, que va a unos
  3 fps.
- `CONKER_ASPECT=16:9` (o `16:10`, `21:9`, un número): vista panorámica sin
  deformar el 3D. Los vídeos se ven siempre en su proporción original, con
  barras negras a los lados (`RECOMP_VIDEO_STRETCH=1` los estira).
- `RECOMP_FLIP_PACING=0`: quita la sincronía con el vblank (por defecto está
  activa: 30 fps, como la consola).
- `RECOMP_VK_VALIDATE=1`: activa las capas de validación de Vulkan.

Dependencias, variables de entorno y cómo regenerar el código:
[work/conker/README.md](work/conker/README.md). Estado y plan del port:
[docs/technical/porting.md](docs/technical/porting.md).

## Contenido del repositorio

- `external/xboxrecomp/`: el toolkit (runtime, herramientas, documentación),
  como submódulo fijado a una versión.
- `work/conker/project/`: el ejecutable de Conker.
  - `src/`: arranque, capa de host por SO y overrides manuales.
  - `src/recomp/gen/`: código C generado a partir del XBE.
  - `gfx/`: los primeros backends del port (Vulkan, Metal, D3D8, null), que
    no están conectados al ejecutor. El renderizador Vulkan que se usa vive en
    el toolkit
    (`external/xboxrecomp/src/vulkan/`, parches 0016–0018).
- `work/conker/packaging/appimage/`: `AppRun`, entrada de escritorio, icono y
  el script del objetivo `appimage`.
- `work/conker/recomp_single_*`, `seed_functions.json`: continuaciones
  recuperadas a mano con el generador anterior.
- `docs/technical/porting.md`: estado y plan multiplataforma.

## Aviso legal

Este repositorio no incluye la ISO, `default.xbe`, assets ni partidas del juego.
Debes proporcionar tu propia copia legal y extraerla localmente. El proyecto es
experimental y no está afiliado con Microsoft, Rare ni Xbox. xboxrecomp incluye
código derivado de xemu bajo LGPL-2.1+; ver `external/xboxrecomp/NOTICE`.
