#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{
 int nsyscall = -1;
 if (argc == 2) {
  nsyscall = atoi(argv[1]);
 }
 if (nsyscall == -1) {
  // mostrar todas las llamadas al sistema
  // con su correspondiente numero de invocaciones
  count();
 } else {
  // mostrar la llamada al sistema dada en nsyscall
  // con su correspondiente numero de invocaciones
  countPar(nsyscall);
 }
 exit();
}
