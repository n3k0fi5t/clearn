#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
  int a[5] ={1,2,3,4,5};
  int *p = (int *)(&a+1);

  printf("%d\n", 128390424^1);

  printf("%p\n", a);
  printf("%p\n", (a+5));
  printf("%d\n", *(a+5));
  printf("%p\n", p);
  printf("%d\n",*(a+1));//a[1]=2
  printf("%d\n",(*p-1));//undefined
  printf("%d\n",0x0fff-1);
  return 0;
}
