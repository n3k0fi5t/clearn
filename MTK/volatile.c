#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
  const int* i = (int*)calloc(1,sizeof(int));
  int *b = (int*)calloc(1,sizeof(int));
  *b = 5;
  int *p = (int*)i;
  printf("%d\n",*i);
  //*i = 2; invalid , value of address cannot change, but address of variable could be changed i = b
  i = b;
  *p = 3;
  printf("%d\n",*i);
  return 0;
}
