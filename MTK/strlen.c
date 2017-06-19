#include <stdio.h>
#include <stdlib.h>

int mstrlen(const char *str);
int main(int argc, const char *argv[])
{
  char *s = "12345678";
  printf("%d",mstrlen(s));
  return 0;
}

int mstrlen(const char *str)
{
  int cnt = 0;
  while(*str++!='\0') cnt++;
  return cnt;
}
