#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 15
#define SWAP(T, x, y) {T tmp = *x; *x = *y; *y = tmp;}

void selection_sor(int*ary, int n){
  int i,j,min;
  for(i=0;i<n-1;i++){
    min = i;
    for(j=i+1;j<n;j++){
      if(ary[min]>ary[j]){
        min = j;
      }
    }
    SWAP(int, &ary[i],&ary[min]);
  }
}


int main(int argc, const char *argv[])
{
  int *ary = (int*)calloc(SIZE, sizeof(int));
  int i = 1,j= 2;

  srand(time(NULL));
  printf("%d, %d\n",i,j);
  SWAP(int, &i, &j);
  printf("%d, %d\n",i,j);


  for(i = 0; i< SIZE; i++){
    *(ary+i) = rand()%100;
    printf("%2d ",*(ary+i));
  }
  putchar('\n');
  selection_sor(ary, SIZE);
  for(i = 0; i< SIZE; i++){
    printf("%2d ",*(ary+i));
  }
  return 0;
}
