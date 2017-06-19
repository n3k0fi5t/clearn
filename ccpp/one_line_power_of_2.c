#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
bool power_of_two(int n);
int main(int argc, const char *argv[])
{
  int n;
  scanf("%d",&n);
  printf("%d is %s power of 2", n, power_of_two(n)?"":"not");

  return 0;
}
bool power_of_two(int n)
{
  return ((n&(n-1)) == 0)? true : false;
}
