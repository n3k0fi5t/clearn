#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
  int a[]={6,7,8,9,10};
  int b[]={2,4,6};
  int *p=a;
  int i ;
  *(p++)+=123;//a[0] = 6+123 = 129
  *(++p)+=123;//a[1+1] = 8+123 = 131

  printf("%d\n",*(b+4));
  for(i=0;i<5;i++){
    printf("a[%d] = %d\n",i,a[i]);
  }
  for(i=0;i<20;i++){
    printf("a[%d] = %d\n",5+i,*(a+5+i));
  }

  return 0;
}
