#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 100

void print(int **matrix,int row, int col);
int **transpose(int **matrix,int row, int col);

int main(int argc, const char *argv[])
{
  char filename[100];
  FILE *fp;
  int row,col;
  char s[100];

  //init
  memset(filename,0,sizeof(char)*BUFFER_SIZE);
  memset(s,0,sizeof(char)*BUFFER_SIZE);
  //filename[BUFFER_SIZE-1]='\0';

  printf("Please input the filename\n");
  scanf("%s",filename);
  printf("read filename '%s'\n", filename );

  ;
  if((fp = fopen(filename,"r+")) != NULL){
    int **matrix ;
    int i,j;

    printf("open OK!\n");
    fscanf(fp,"%s\n",s);
    row = atoi(s);
    memset(s,0,sizeof(char)*BUFFER_SIZE);

    fscanf(fp,"%s\n",s);
    col = atoi(s);
    memset(s,0,sizeof(char)*BUFFER_SIZE);

    printf("row:%d, col:%d\n",row,col);


    matrix = (int**)malloc(sizeof(int*)*row);
    //allocate memory
    for(i=0;i<row;i++){
      matrix[i] = (int*)malloc(sizeof(int)*col);
    }
    //initialize matrix
    for(i=0;i<row;i++){
      for(j=0;j<col;j++){
        memset(matrix[i],0,sizeof(int)*col);
        //matrix[i][j]=0;
      }
    }
    print(matrix,row,col);

    for(i=0;i<row;i++){
      j=0;
      char *delimiter=" ";
      char *token;

      fgets(s,BUFFER_SIZE,fp);
      s[strlen(s)]='\0';
      printf("%s, %d",s,strlen(s));

      token = strtok(s,delimiter);

      while(token!=NULL){
        printf("Get token %d\n",atoi(token));
        matrix[i][j++] = atoi(token);
        token = strtok(NULL,delimiter);
      }

      memset(s,0,sizeof(char)*BUFFER_SIZE);
      putchar('\n');
    }
    fclose(fp);
    print(matrix,row,col);
    int **new_matrix = transpose(matrix, row,col);
    print(new_matrix,col,row);

  }else{
    printf("file %s open failed",filename);
  }

  return 0;
}
int **transpose(int **matrix,int row, int col){
  int i,j;
  int **new_matrix = (int**)malloc(sizeof(int*)*col);
  for(i=0;i<col;i++){
    new_matrix[i] = (int*)malloc(sizeof(int)*row);
    memset(new_matrix[i],0,sizeof(int)*row);
  }

  for(i = 0;i<row;i++){
    for(j=0;j<col;j++){
      new_matrix[j][row-i-1] = matrix[i][j];
    }
  }
  return new_matrix;
}
void print(int **matrix,int row, int col){
  int i,j;
  for(i=0;i<row;i++){
    for(j=0;j<col;j++){
      printf("%d ",matrix[i][j]);
    }
    putchar('\n');
  }
}
