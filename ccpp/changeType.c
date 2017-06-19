#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
  int a=32768,c;
  unsigned short b = 32768;
  printf("%p\n",&a);
  printf("%p\n",(short*)&a);
  printf("%d\n",*(short*)&a);
  printf("%d\n",a);
  printf("%d\n",(short)a);
  c = (int)b;
  printf("%d\n",b);
  printf("%d\n",c);
  uint8_t buf[28]={};
  memset(buf, 0, 28);

  buf[3]=128;
  c = *((int*)buf);
  printf("[%d]%x\n",b,c);
  printf("[%d]%d\n",b,sizeof(buf));

  return 0;
}
