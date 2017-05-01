#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 15

void print_array(int *array, int n );
void insert(int *array, int i, int val);
void insertion_sort(int *array, int n);
int main(int argc, const char *argv[])
{
  int *array;
  int i ;
  //generate array
  array =(int*) malloc(sizeof(int)*MAX_SIZE);
  srand(time(NULL));

  //make array have border
  array[0] = -100;
  for(i=1;i<MAX_SIZE ; i++){
    array[i] = rand()%100;
  }
  print_array(array,MAX_SIZE);
  insertion_sort(array, MAX_SIZE);
  print_array(array,MAX_SIZE );

  return 0;
}
void print_array(int *array, int n ){
  int i;
  for(i=1; i<n ;i++){
    printf("%d , ",*(array+i));
  }
  putchar('\n');
}
void insertion_sort(int *array, int n){
  int i ;
  for(i = 2; i<n;i++){
    insert(array, i, *(array+i));
  }
}
void insert(int *array, int i, int val){
  while(*(array+i-1)>val){
    *(array+i) = *(array+i-1);
    i--;
  }
  *(array+i)=val;
}
