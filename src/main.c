#define SMART_PTR_IMPLEMENTATION
#include "smart_ptr.h"

#include <stdio.h>
#include "types.h"




typedef struct {
  char* rep;
  size_t num;

} cnf;



int main(void )
{

  smart(c1, cnf, &sdes, ZEROED_MEM);
  c1->rep = (char*)  malloc(20);
  strcpy(c1->rep, "foo");
  printf("%s\n", c1->rep);
  free(c1->rep);
  smart(c2, cnf, &sdes, UNZEROED_MEM);
}




