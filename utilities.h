#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

#define MATRIX_SIZE 5
#define NAME_LENGTH 10


typedef struct{
    char str[NAME_LENGTH];
}STRING;

int menu(int * matrix[MATRIX_SIZE][MATRIX_SIZE], STRING * name_list[MATRIX_SIZE]);

#endif // MAIN_H_INCLUDED
