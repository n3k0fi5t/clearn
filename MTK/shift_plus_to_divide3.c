#include <stdio.h>
#include <stdlib.h>

int d3(int n){
  int upper = n>>1, lower = n>>2;
  int i;
  for(i=lower+1; i < upper ;i++){
    if(((i)<<1)+(i)>n) break;
  }
    //printf("%d %d %d\n",i,i<<1,(i<<1)+i);
    //if(((i<<1)+i) == n){break;}
  return i-1;
}
int main(int argc, const char *argv[])
{
  int i;
  for(i=1;i<4096;i++){
  printf("%d, [%d,%d] %d\n",i, i/3, d3(i),i/3==d3(i));
  }
  return 0;
}
