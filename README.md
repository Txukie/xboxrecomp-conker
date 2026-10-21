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
| Runtime | ✅ xboxrecomp v0.16.0 (submódulo) |
| Compilación Linux (GCC) | ✅ Ejecutable nativo + pruebas |
| Compilación Windows / macOS | 🟡 Soportadas por el runtime, sin probar en este proyecto |
| Código recompilado | ✅ Regenerado con v0.16.0 (20.029 funciones, 20 sin resolver) |
| Frames (push-buffers D3D8LTCG) | 🟡 Ejecutor activo: superficie 640×480 y primer flip; se bloquea esperando a la GPU |
| Backend Vulkan | 🟡 Funciona; falta conectarlo al ejecutor |
| Backend Metal | 🔴 Esqueleto |
| Juego visible y controlable | 🔴 Todavía no |

## Prueba rápida

Necesitas una copia **extraída** de un disco que poseas legalmente (la carpeta
debe contener `default.xbe`; la ISO no se carga directamente).

```sh
git clone --recurse-submodules <este repositorio>
cmake -S work/conker/project -B work/conker/project/build -G Ninja
cmake --build work/conker/project/build
./work/conker/run_conker.sh /ruta/a/Conker          # Windows: run_conker.ps1
```

Dependencias, variables de entorno y cómo regenerar el código:
[work/conker/README.md](work/conker/README.md). Estado y plan del port:
[docs/technical/porting.md](docs/technical/porting.md).

## Contenido del repositorio

- `external/xboxrecomp/`: el toolkit (runtime, herramientas, documentación),
  como submódulo fijado a una versión.
- `work/conker/project/`: el ejecutable de Conker.
  - `src/`: arranque, capa de host por SO y overrides manuales.
  - `src/recomp/gen/`: código C generado a partir del XBE.
  - `gfx/`: backends gráficos propios (Vulkan, Metal, D3D8 heredado, null).
- `work/conker/recomp_single_*`, `seed_functions.json`: continuaciones
  recuperadas a mano con el generador anterior.
- `docs/technical/porting.md`: estado y plan multiplataforma.

## Aviso legal

Este repositorio no incluye la ISO, `default.xbe`, assets ni partidas del juego.
Debes proporcionar tu propia copia legal y extraerla localmente. El proyecto es
experimental y no está afiliado con Microsoft, Rare ni Xbox. xboxrecomp incluye
código derivado de xemu bajo LGPL-2.1+; ver `external/xboxrecomp/NOTICE`.
