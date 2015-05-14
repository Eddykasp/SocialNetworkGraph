#ifndef MATRIX-GRAPH_H_INCLUDED
#define MATRIX-GRAPH_H_INCLUDED

#include "utilities.h"

void init_matrix(int * matrix[MATRIX_SIZE][MATRIX_SIZE]);
void view_matrix(int * matrix[MATRIX_SIZE][MATRIX_SIZE]);
void init_identifier_mapping(STRING * name_list[MATRIX_SIZE]);
void view_mapping(STRING * name_list[MATRIX_SIZE]);
void create_mapping(STRING * name_list[MATRIX_SIZE]);

#endif // MATRIX-GRAPH_H_INCLUDED
