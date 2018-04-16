

// begin bar.c
#include <stdlib.h>
#include <stdint.h>
extern void *__cxa_allocate_exception(size_t thrown_size);
extern void __cxa_throw (void *thrown_exception, void* *tinfo, void (*dest) (void *) );
extern void * _ZTIl; // typeinfo of long
int bar1()
{
   int64_t * p = (int64_t*)__cxa_allocate_exception(8);
   *p = 1976;
   __cxa_throw(p,&_ZTIl,0);
  return 10;
}

extern "C" int bar1();
void foo()
{
  try{
    bar1();
  }catch(int64_t x){
    printf("good %ld",x);
  }
}
int main(int argc, char *argv[])
{
  foo();
  return 0;
}
