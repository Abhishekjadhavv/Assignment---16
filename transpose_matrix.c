// Write a program in C to find the transpose of a given matrix.
#include <stdio.h>

int main()
{

    int m1[3][2] = {{3, 1}, {2, 3}, {1, 2}};
    int transpose[2][3];

    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 1; j++)
        {
            transpose[j][i] = m1[i][j];
        }
    }

    printf("transpose matrix\n");

    for (int i = 0; i <= 1; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}