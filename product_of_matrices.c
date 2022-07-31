// Write a program to calculate the product of two matrices each of order 3x3.

#include <stdio.h>

int main()
{
    int m1[3][3] = {{12,8,4}, {3,17,14},{9,8,10}};
    int m2[3][3] = {{5,19,3}, {6,15,9},{7,8,16}};
    int product[3][3];

    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            product[i][j] = 0;
            for (int k = 0; k <= 2; k++)
            {
                product[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }

    printf("product of matrices are\n");
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }
    return 0;
}