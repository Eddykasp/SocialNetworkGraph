#include "utilities.h"

int menu(int * matrix[MATRIX_SIZE][MATRIX_SIZE], STRING * name_list[MATRIX_SIZE])
{
    system("cls");
    printf("MAIN MENU\n\nPlease make a selection.\n");
    printf("0: Quit\n");
    printf("1: Modify relations\n");
    printf("2: Map identifiers\n");
    printf("3: View Adjacency Matrix\n");

    char c;
    int q=0;
    c = getch();
    c-=48;
    switch(c)
    {
    case 0:
        {
            q=1;
            break;
        }
    case 1:
        {
            break;
        }
    case 2:
        {
            view_mapping(name_list);
            getch();
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
    return q;
}
