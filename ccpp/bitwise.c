#include <stdio.h>
#include <stdlib.h>

#define BYTE_TO_BINARY(byte) \
  (byte & 0x80 ? '1' : '0'), \
  (byte & 0x40 ? '1' : '0'), \
  (byte & 0x20 ? '1' : '0'), \
  (byte & 0x10 ? '1' : '0'), \
  (byte & 0x08 ? '1' : '0'), \
  (byte & 0x04 ? '1' : '0'), \
  (byte & 0x02 ? '1' : '0'), \
  (byte & 0x01 ? '1' : '0')

#define NUM 127

int bitwise(int num);
int main(int argc, const char *argv[])
{
  int n = NUM;
  int len = sizeof(n);
  int i ;
  for(i=0;i<len;i++){
    printf("%c%c%c%c%c%c%c%c\n",BYTE_TO_BINARY((uint8_t)n));
    n=n>>8;
  }


  n=NUM;
  printf("%d has %d bits 1\n",n,bitwise(n));
  printf("%d has %d bits 1\n",382719,bitwise(382719));
  return 0;
}

int bitwise(int num)
{
  int i,cnt=0, first;
  for(i=0;num!=0;i++)
  {
    if(num%2!=0){
      printf("find bit 1 at position %d\n",i);
    }
    cnt += num&1;
    num = num>>1;
  }
  return cnt;
}
