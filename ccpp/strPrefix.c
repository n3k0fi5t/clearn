#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

bool isPrefix(char *src, char *dst);
int main(int argc, const char *argv[])
{
  char *src = "5278";
  char *dst = "5278787878788";

  printf("%s\n",isPrefix(src, dst)?"True":"False");
  printf("%s",isPrefix("52789", dst)?"True":"False");
  return 0;
}

bool isPrefix(char *src, char *dst)
{
  int slen, dlen;
  int i,j;
  slen = strlen(src);
  dlen = strlen(dst);

  if(slen > dlen){
    return false;
  }
  for(i=0 ; i< slen; i++){
    if(dst[i] != src[i]){
      return false;
    }
  }
  return true;
}
