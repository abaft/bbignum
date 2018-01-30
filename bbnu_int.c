#include "bbnu_int.h"

bbnu_err_t bbnu_init(bbnu_int* receiver)
{
  free(receiver->limb);
  receiver->_limb = _bbnu_malloc(sizeof(_bbnu_limbType));
  if (new_int == NULL) return BBIGNUM_ALLOC_FAIL;

  return BBIGNUM_SUCCESS;
}
