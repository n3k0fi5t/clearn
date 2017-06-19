#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define UPPER 'A'
#define LOWER 'a'

int is_upper(char c){return c >= LOWER?-1:1;}
void upsidedown(char *str){
  while(*str!='\0'){
    *str = *str + is_upper(*str) * (LOWER - UPPER);
    str++;
  }
}
int main(int argc, const char *argv[])
{
  char s[] = "abCdEfG";
  printf("%s\n",s);
  upsidedown(s);
  printf("%s\n",s);

  return 0;
}
