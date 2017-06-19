#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
  int i=0,j;
  for(i=0,j=1;i<5;i++)
    j*=2;j+=1;
  printf("%d",j);
  if(i=5) printf("\n%d\n",i);
  if(i=0 || i==0) printf("1");
  if(i==0) printf("2");
  if(i<5) printf("3");

  return 0;
}
