#include "utilities.h"

void menu(int * matrix[MATRIX_SIZE][MATRIX_SIZE])
{
    printf("MAIN MENU\n\nPlease make a selection.\n");
    printf("1: Modify relations\n");
    printf("2: Map identifiers\n");
    printf("3: View Adjacency Matrix\n");

    char c;
    c = getch();
    c-=48;
    switch(c)
    {
    case 1:
        {
            break;
        }
    case 2:
        {
            break;
        }
    case 3:
        {
            view_matrix(matrix);
            break;
        }
    default:
        {
            printf("n/a");
            break;
        }
    }
}
