#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int **matrix_transpose(int **matrix, int row, int col);
void print_matrix(int **matrix,int row, int col);
int main(int argc, const char *argv[])
{
  int row = 3, col = 4;
  int i,j;
  int **matrix;
  srand(time(NULL));

  matrix = (int**)calloc(row, sizeof(int*));
  for(i=0;i<row;i++){
    matrix[i]=(int*)calloc(col, sizeof(int));
    for(j=0;j<col;j++){
      matrix[i][j]=rand()%100;
    }
  }
  print_matrix(matrix, row, col);
  matrix = matrix_transpose(matrix, row, col);
  print_matrix(matrix, col, row);

  return 0;
}
int **matrix_transpose(int **matrix, int row, int col)
{
  int i,j;
  int **new_matrix;
  new_matrix = (int**)calloc(col ,sizeof(int*));
  for(i=0;i<col;i++){
    new_matrix[i] = (int*)calloc(row, sizeof(int));
    for(j = 0;j < row; j++){
      new_matrix[i][j] = matrix[j][i];
    }
  }
  return new_matrix;
}

void print_matrix(int **matrix,int row, int col)
{
  int i,j;
  for(i=0;i<row;i++){
    for(j=0;j<col;j++){
      printf("%3d ",matrix[i][j]);
    }
    putchar('\n');
  }
}
