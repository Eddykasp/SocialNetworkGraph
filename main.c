#include <stdio.h>
#include <stdlib.h>
#include "utilities.h"
#include "matrix-graph.h"

int main()
{
    int matrix[MATRIX_SIZE][MATRIX_SIZE], q=0;
    STRING name_list[MATRIX_SIZE];

    init_matrix(matrix);
    init_identifier_mapping(name_list);

    while(!q)
    {
        q=menu(matrix, name_list);
    }

    return 0;
}
