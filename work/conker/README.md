# Espacio de trabajo de Conker

Este directorio contiene el proyecto anfitrión y las continuaciones recuperadas
para **Conker: Live & Reloaded**. Los archivos originales del juego no forman
parte del repositorio y nunca se modifican.

El runtime y las herramientas vienen de
[xboxrecomp](https://github.com/sp00nznet/xboxrecomp), incluido como submódulo
en `external/xboxrecomp` y fijado a una versión publicada (ahora v0.15.0).

## Estado actual

- Código regenerado con xboxrecomp v0.15.0 (`regenerate.sh`): 19.993
  funciones, 21 destinos sin resolver (antes 9.425), los 145 imports del
  kernel con bridge. Incluye las secciones de las librerías XDK (D3D, DSOUND,
  XACTENG, XONLINE...), no solo `.text`.
- Compila y enlaza en Linux (GCC). Windows (MSVC) y macOS (x86-64 y arm64)
  están soportados por el runtime, pero este proyecto aún no se ha compilado
  en ellos; ver [docs/technical/porting.md](../../docs/technical/porting.md).
- Arranque: TLS, heap, archivos de guardado, memoria contigua, la ISR de la
  GPU (vector 3) recibe vblanks, D3D8LTCG configura una superficie 640×480 de
  32 bits en `0x001B0000` y hace el primer flip.
- Bloqueo actual: después del primer flip, D3D espera en un bucle a que la
  GPU avance (fence/semáforo). Falta indicar al ejecutor dónde está el
  semáforo de D3D (`nv2a_pb_set_semaphore_target`, puntero en device+0x30) y
  probablemente el espejo de fences.
- Dos correcciones del runtime que upstream aún no tiene están en
  `patches/xboxrecomp/`; CMake las aplica al submódulo.

## Preparar el juego

Se necesita una copia extraída de un disco que poseas legalmente. La carpeta
debe contener `default.xbe`; el lanzador no abre una ISO directamente.

Puedes colocarla en `work/conker/game_files/Conker` (ignorada por Git) o pasar
su ruta explícitamente:

```powershell
.\work\conker\run_conker.ps1 -GameDirectory "D:\Juegos\Conker"
```

```sh
./work/conker/run_conker.sh /ruta/a/Conker
```

También se puede indicar con `CONKER_GAME_DIR`. Las partidas se guardan en
`%LOCALAPPDATA%\ConkerRecomp\saves` (Windows),
`~/.local/share/conker-recomp/saves` (Linux) o
`~/Library/Application Support/ConkerRecomp/saves` (macOS), salvo que se pase
un segundo argumento o `CONKER_SAVE_DIR`.

## Compilar

```sh
git submodule update --init external/xboxrecomp
external/xboxrecomp/tools/linux/install_deps.sh     # Linux; macOS: tools/macos/setup.sh
cmake -S work/conker/project -B work/conker/project/build -G Ninja
cmake --build work/conker/project/build
(cd work/conker/project/build && ctest)             # pruebas sin archivos del juego
./work/conker/run_conker.sh
```

En Windows, lo mismo desde una consola de Visual Studio x64 y
`.\work\conker\run_conker.ps1`. Para el backend Vulkan hacen falta además el
Vulkan SDK y SDL2; sin ellos se desactiva solo.

Variables útiles al ejecutar (todas del toolkit salvo la primera):

`main.c` activa por defecto `RECOMP_PB_EXEC=1`, `RECOMP_TITLE_KEVENTS=1`
(D3D espera en un KEVENT que construye él mismo) y `RECOMP_VBLANK=paced` (su
ISR necesita vblanks); cualquiera se puede sobrescribir desde fuera.

| Variable | Efecto |
|---|---|
| `XBOX_GFX_BACKEND=vulkan\|metal\|d3d8compat\|null` | backend de `project/gfx` |
| `RECOMP_PB_EXEC=1` | ejecutar los push-buffers (frames de D3D8LTCG) |
| `RECOMP_PB_SCAN=1` | solo inventariar los push-buffers |
| `RECOMP_WATCHDOG_SECS=N` | volcar la pila del invitado si se cuelga N s |
| `RECOMP_STUB_LOG=1` | nombrar cada stub sin resolver la primera vez que se ejecuta |
| `RECOMP_UNIMPL_TRAP=1` | abortar en la primera instrucción sin traducir |
| `RECOMP_AC97_READY=1` | activar el APU emulado |

## Regenerar el código

Necesita `default.xbe` en `game_files/Conker` y Python 3.10+ con `capstone`:

```sh
python3 -m venv work/conker/.venv && work/conker/.venv/bin/pip install capstone
./work/conker/regenerate.sh            # genera en work/conker/pipeline/gen (~25 min)
./work/conker/regenerate.sh --from install --install   # copia a project/src/recomp/gen
```

`--from disasm|func_id|abi|recomp` repite desde una etapa. Los logs quedan en
`work/conker/pipeline/`.

El script desensambla `.text` y las secciones de código de las librerías XDK
(`--text-only` solo deja fuera D3D, es decir D3D8LTCG entero), y llama al
recompilador con `--entry-stubs` (xboxrecomp #207): cada llamada a mitad de
una función ejecuta una copia de esa función que entra en ese punto, que es lo
que hacían a mano los `recomp_single_*`. Por eso no usa `seed_functions.json`
(`--seeds` lo activa): casi todas sus entradas están a mitad de función, y el
disassembler nuevo advierte que una semilla así recorta la función que la
contiene.

## Diagnóstico

La última ejecución y compilación quedan en `last_run.log` y
`last_build.log`; ambos se ignoran en Git. El XBE, la ISO, los datos extraídos
y el ejecutable compilado tampoco se publican.
