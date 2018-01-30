#ifndef _BBIGNUM_H_
#define _BBIGNUM_H_ 

#define _bbnu_limbType unsigned long 

typedef bbnu_err_t int;
#define BBIGNUM_SUCCESS 0
#define BBIGNUM_ALLOC_FAIL -1

// Memory Allocation Function
void* _bbnu_realloc(void* ptr, size_t size)
{
  return realloc(ptr, size);
}
void* _bbnu_malloc(size_t size)
{
  return calloc(1, size);
}

struct _bbnu_type 
{
  long _allocCount; // record of the number of allocated limbs
  long _size; // record of the current length of the number in bits
 
  _bbnu_limb_type *_limb; // Pointer to the first limb
};


#endif
