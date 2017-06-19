#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void permutation(char str[], int n, int slen);
void swap(char *a, char *b);
int main(int argc, const char *argv[])
{
  char s[] = "abc";

  char *substr = (char*)malloc(sizeof(char)*(3));
  memset(substr, 0, 3);
  memcpy(substr, s+2, 0);
  //printf("%s\n", substr);

  permutation(s, 0, 3);

  return 0;
}
void swap(char *a, char *b){
  char temp = *a;
  *a = *b;
  *b = temp;
}
void permutation(char str[], int n, int slen)
{
  int i;
  if(n == slen){
    printf("%s\n", str);
  }else{
    for(i = n; i < slen; i++){
      swap(str+n, str+i);
      permutation(str, n+1, slen);
      swap(str+n, str+i);
    }
  }
}
