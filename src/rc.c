#include "-0_rc.h"

void g_rc_increase(g_rc_t *rc) { rc->rc++; }

void g_rc_decrease(g_rc_t *rc, void (*dispose)(void *context), void *context) {
  if (--rc->rc == 0) {
    dispose(context);
  }
}
