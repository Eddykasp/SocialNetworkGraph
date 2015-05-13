#include <stdio.h>
#include <stdlib.h>
#include "utilities.h"
#include "matrix-graph.h"

int main()
{
    int matrix[MATRIX_SIZE][MATRIX_SIZE], q=0;
    init_matrix(matrix);

    while(!q)
    {
        q=menu(matrix);
    }

    return 0;
}
