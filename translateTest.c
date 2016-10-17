#include "param.h"
#include "types.h"
#include "stat.h"
#include "user.h"
#include "fs.h"
#include "fcntl.h"
#include "syscall.h"
#include "traps.h"
#include "memlayout.h"

void parametersInvalid(char * prog_name)
{
   printf(1,"Invalid Parameters %s \n",prog_name);
   exit();
}

void invalidAddress()
{
  printf(1,"Invalid Address");
  exit();
}

//Global Passed in VA

char *virtualAddress = "";

void
translateTest() {
  printf(1,"We are about to translate \n");
  printf(1,"\n\n");
  char test = 'a';
  uint physicalAddress = translate(&test);

  printf(1,"The physical address of %p is: %p\n",&test, physicalAddress);
  
  uint *nullptr = 0;
  printf(1,"The date at %p is: %p\n",nullptr, *nullptr);
}

int
main(int argc, char *argv[])
{
  translateTest();
  printf(1,"**We are done with the test***\n\n");
  exit();
}
