#include <stdio.h>
#include <stdlib.h>

void bit(int n){
  printf("%d:   %d, %d\n",n,n>>31,n>>30);
}
int main(int argc, const char *argv[])
{
  int n = 2147483647;
  bit(n);
  n += 1;
  bit(n);

  return 0;
}
