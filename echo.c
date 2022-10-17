#include "types.h" //Header file that helps identify the type of the file serial number or the file id
#include "stat.h" //Data structure that includes the stat command
#include "user.h" // Basically some stuff used for gdb

//refer : 

int
main(int argc, char *argv[])
{
  int i;

  for(i = 1; i < argc; i++)
    printf(1, "%s%s", argv[i], i+1 < argc ? " " : "\n");
  exit();
}
