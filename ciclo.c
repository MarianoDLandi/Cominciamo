#include <stdio.h>
#include "ciclo.h"

int ciclo(int i , int n)
{

  int modulo;
  modulo = (n/i)%10;
  return modulo;
}
