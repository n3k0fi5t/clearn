#include <stdio.h>
#include <stdlib.h>

int x;//store in .text segment
static int y;//without initialization store in .bss segment
static int v = 10;//with initializatoin  store in .data
const char z = 'a';//store in .text segment

int main(int argc, const char *argv[])
{
  int a1,a2,a3;//data store in stack
  int *b = (int*)malloc(sizeof(int)*5);//data store in heap
  int *d = (int*)malloc(sizeof(int)*5);//data store in heap
  int c[] = {9,12,23,34,48,51};//data store in stack
  int i;
  int *p = c;

  printf("global x %p \n",&x);
  printf("static int y %p \n",&y);
  printf("static int v = 10 %p \n",&y);
  printf("const char z %p \n",&z);
  printf("int a1,a2,a3 %p %p %p\n",&a1, &a2, &a3);
  printf("%p \n",&(b[1]));
  printf("*b %p %p %p\n",b, b+1, b+2);
  printf("*d %p %p %p\n",d, d+1, d+2);

  printf("c[] %p %p %p\n",c, c+1, c+2);
  printf("%d\n",*(p)++);//get *p then move to next pointer; get 9  move to 12
  printf("%d\n",*p++);//get *p then move to next pointer; get 9  move to 12
  printf("%d\n",*++p);//next to next pointer then get *p  move to 23 get 23
  ++p;//move to 34
  ++p;//move to 48
  printf("%d\n",*p++);//get *p then move to next pointer; get 48  move to 51
  printf("%d\n",*p);//get *p then move to next pointer; get 51





  return 0;
}
