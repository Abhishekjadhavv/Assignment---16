// Write a program in C to print or display the lower triangular of a given matrix.

#include <stdio.h>

int main()
{
    int m1[3][3] = {{12, 8, 4}, {3, 17, 14}, {9, 8, 10}};

    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            if (j > i)
            {
                m1[i][j] = 0;
            }
        }
    }

    printf("Lower triangular matrix: \n");
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            printf("%d ", m1[i][j]);
        }
        printf("\n");
    }

    return 0;
}