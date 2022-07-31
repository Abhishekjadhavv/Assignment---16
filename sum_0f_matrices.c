// Write a program to calculate the sum of two matrices each of order 3x3.

#include <stdio.h>

int main()
{
    int m1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int m2[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int sum[3][3];

    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            sum[i][j] = m1[i][j] + m2[i][j];
        }
    }

    printf("sum of two matrices are\n");

    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}