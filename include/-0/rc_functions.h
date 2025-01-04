#ifndef G_0_RC_FUNCTIONS_H
#define G_0_RC_FUNCTIONS_H

#ifdef __cplusplus
#include <cstddef>
#else
#include <stddef.h>
#endif

#include "rc_types.h"

#ifdef __cplusplus
extern "C" {
#endif

void g_0_rc_increase(g_0_rc_t *rc);
void g_0_rc_decrease(g_0_rc_t *rc, void (*dispose)(void *context),
                     void *context);

#ifdef __cplusplus
}
#endif

#endif
