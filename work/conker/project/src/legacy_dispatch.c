/*
 * Only compiled while src/recomp/gen comes from a pre-v0.15 generator (see
 * CMakeLists.txt). Those dispatch tables have no flat table; returning 0 is
 * the documented "use the binary search" answer. Delete with the old code.
 */
#include <stddef.h>

int recomp_dispatch_init(void) { return 0; }
size_t recomp_dispatch_flat_bytes(void) { return 0; }
