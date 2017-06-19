#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_SIZE 15

void selection_sort(int *input, int n);
int main(int argc, const char *argv[])
{
  int i = 0;
  int *array = (int*)malloc(sizeof(int)*MAX_SIZE);
  srand(time(NULL));
  for(i = 0; i< MAX_SIZE;i++)
    array[i] = rand()%100;

  for(i = 0; i< MAX_SIZE;i++)
    printf("%d, ",*(array+i));
  selection_sort(array, MAX_SIZE);
  putchar('\n');
  for(i = 0; i< MAX_SIZE;i++)
    printf("%d, ",*(array+i));


  return 0;
}
void swap(int *a, int *b){int tmp = *a ;*a = *b;*b = tmp;}
void selection_sort(int *input, int n)
{
  int i,j;
  int min;
  for(i = 0;i<n ; i++){
    min = i;
    for(j = i+1; j<n ;j++){
      if(input[min] > input[j])
        min = j;
    }
    if(min != i ){
      swap(&input[i],&input[min]);
    }
  }
}
