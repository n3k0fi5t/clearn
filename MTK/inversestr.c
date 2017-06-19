#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inverse(char *str);
int main(int argc, const char *argv[])
{
  char str[] = "abcdefg";
  char str2[] = "hahalalalaland";
  printf("%s\n",str);
  inverse(str);
  printf("%s\n",str);

  return 0;
}
//swap char
void swap(char *a, char *b){char tmp = *a;*a=*b;*b=tmp;}

void inverse(char *str)
{
 int len = strlen(str);
 int i ;
 for(i=0; i< len/2 ;i++){
   swap(&str[i],&str[len-i-1]);
 }
}
