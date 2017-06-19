#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool string_prefix(char *prefix, char *target);
#define SIZE 6
int main(int argc, const char *argv[])
{
  char * prefix = "520pkk";
  char **string;
  int i ;

  string = (char**)calloc(SIZE,sizeof(char*));
  for(i=0;i<SIZE;i++){
    string[i] = (char*)calloc(50,sizeof(char));
  }

  string[0] = "520123jqwds";
  string[1] = "ajsdj520pkkaaaa";
  string[2] = "qwe520qwe520pkq520";
  string[3] = "ajioc520pkk520pkk";
  string[4] = "5205205020502050125010250520pkk";
  string[5] = "520pkk";
  for(i=0;i<SIZE;i++){
    if(string_prefix(prefix, string[i])){
      printf("%30s     contains string %s\n",string[i],prefix);
    }else{
      printf("%30s not contains string %s\n",string[i],prefix);
    }
  }

  return 0;
}
bool string_prefix(char *prefix, char *target)
{
  int len = strlen(prefix);
  int i,j;

  for(i=0; i < strlen(target)-len+1 ;i++){
    for(j = 0 ;j<len;j++){
      if(prefix[j]!=target[i+j]) break;
      if(j == len-1) return true;
    }
  }
  return false;
}
