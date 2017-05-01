#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void split(char *str, const char *del, char **res);

int main(int argc, const char *argv[])
{
  char *str="this is the test context.";
  const char *del = " ";
  char **res = (char**)malloc(sizeof(char)*strlen(str));

  split(str, del, res);
  while(*res != NULL){
    printf("%s\n",*res);
    res++;
  }

  return 0;
}

void split(char *str, const char *del, char **res)
{
  //because strtok will change the source, so copy one to avoid this
  char *s = (char*)malloc(sizeof(char) * strlen(str));
  char *token;
  strcpy(s, str);
  token = strtok(s, del);

  while(token != NULL)
  {
    //need to allocate a new mem for store result, because token will be free after function finished
    char *tmp = (char*)malloc(sizeof(char) * strlen(token));
    strcpy(tmp,token);
    *res++ = tmp;
    token = strtok(NULL, del);
  }
  *res = NULL;
}
