#include "matrix-graph.h"

void init_matrix(int * matrix[MATRIX_SIZE][MATRIX_SIZE])
{
    int i,j;
    for(i=0;i<MATRIX_SIZE;i++)
    {
        for(j=0;j<MATRIX_SIZE;j++)
        {
            matrix[i][j]=0;
        }
    }
}

void view_matrix(int * matrix[MATRIX_SIZE][MATRIX_SIZE])
{
    int i,j;
    for(i=0;i<MATRIX_SIZE;i++)
    {
        for(j=0;j<MATRIX_SIZE;j++)
        {
            printf("%5d", matrix[i][j]);
        }
        printf("\n");
    }
}
