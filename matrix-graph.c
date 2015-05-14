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
    system("cls");
    printf("\n");
    int i,j;
    for(i=0;i<MATRIX_SIZE;i++)
    {
        for(j=0;j<MATRIX_SIZE;j++)
        {
            printf("%5d", matrix[i][j]);
        }
        printf("\n");
    }
    getch();
}

void init_identifier_mapping(STRING * name_list[MATRIX_SIZE])
{
    int i,j;
    for(i=0;i<MATRIX_SIZE;i++)
    {
        for(j=0;j<NAME_LENGTH;j++)
        {
            (name_list+i)[j] = '\0';
        }
    }
}

void view_mapping(STRING * name_list[MATRIX_SIZE])
{
    int i,j;
    for(i=0;i<MATRIX_SIZE;i++)
    {
        printf("%d: ", i);
        for(j=0;j<NAME_LENGTH;j++)
        {
            printf("%c",(name_list+i)[j]);
        }
        printf("\n");
    }
}
