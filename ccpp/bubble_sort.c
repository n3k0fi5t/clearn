#include <stdio.h>
#include <stdlib.h>

#define NUM 15

void print(int *array, int n);
void b_sort(int *array, int n);
int main(int argc, const char *argv[])
{
  int i;
  int *array = (int*)malloc(NUM * sizeof(int));
  srand(1);
  for(i = 0; i< NUM; i++){
    *(array+i) = rand()%100;
  }
  print(array,NUM);
  b_sort(array,NUM);
  print(array,NUM);


  return 0;
}
void swap(int *a, int *b){
  int tmp = *a;
  *a = *b;
  *b = tmp;
}
void b_sort(int *array, int n)
{
  int i,j;
  for(i=0;i<n-1;i++){
    for(j=0;j<n-i-1;j++){
      if(array[j]>array[j+1]){
        swap(array+j, array+j+1);
      }
    }
  }
}

void print(int *array, int n){
  int i ;
  for(i = 0;i<n; i++){
    printf("%d ", *(array+i));
  }
  putchar('\n');
}
