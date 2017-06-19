#include <stdio.h>
#include <stdlib.h>
int b;
int print(int a,int b){
  printf("%d\n",a+b);
  return a+b;
}
int print2(int a,int b){
  printf("%d\n",a-b);
  return a-b;
}
int main(int argc, const char *argv[])
{
  int (*fptr)() = print;
  //also can put type of parameter into ()
  //int (*fptr)(int,int) = print;
  int a;
  printf("%d\n",b);
  a = fptr(1,2);
  printf("%d\n",a);
  fptr = print2;
  a = fptr(5,10);
  printf("%d\n",a);


  return 0;
}
