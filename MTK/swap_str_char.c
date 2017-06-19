#include <stdio.h>
#include <stdlib.h>

void swapstr(char **a, char **b){
  char *tmp = *a;
  *a =*b;
  *b = tmp;
}
void swapchar(char *a, char *b){
  char tmp = *a;
  *a = *b;
  *b= tmp;
}
int main(int argc, const char *argv[])
{
  char *s1[] = {"abc","ppppp"};
  char s2[] = "abcde";// using [] mean that char is changable, otherwise it will cause bus error
  printf("%s %s %c %c\n",s1[0],s1[1],s2[0],s2[4]);
  swapstr(&s1[0],&s1[1]);
  swapchar(&s2[0],&s2[4]);

  printf("%s %s %c %c\n",s1[0],s1[1],s2[0],s2[4]);


  return 0;
}
