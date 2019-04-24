#include <stdio.h>

#define ROWS 3
#define COLS 3

int matrix[ROWS][COLS];

void print_matrix()
{
    int i, j;

    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            matrix[i][j] = i + j;
            printf("%d \t", matrix[i][j]);
        }

        printf("\n");
    }
}

int main()
{
    int i, j;
    printf("Populating a 2d integer array");
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            matrix[i][j] = i + j;
        }
    }

    print_matrix();

    return 0;
}
