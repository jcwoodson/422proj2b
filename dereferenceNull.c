#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{
  printf(1,"Beginning Dereference Function \n");

  //This way seems to work
  char *a;
  *a = 0;
  a[0] = 'a';

  //vs doing it this way... This way makes it trap
  // char *a = 0;
  // a[0] = 'a';


  printf(1,"Finished dereferencing \n\n");
  printf(1, "Value of deference a: %x", &a);
  exit();
}
