#include <stdio.h>
#include <stdlib.h>
#include "utilities.h"
#include "matrix-graph.h"

int main()
{
    int matrix[MATRIX_SIZE][MATRIX_SIZE];
    init_matrix(matrix);

    menu();

    return 0;
}
