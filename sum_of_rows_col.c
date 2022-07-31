// Write a program in C to find the sum of rows and columns of a Matrix.

#include <stdio.h>

int main()
{
    int m1[3][3] = {{12, 8, 4}, {3, 17, 14}, {9, 8, 10}};
    int sum_of_rows = 0, sum_of_col = 0;

    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            sum_of_rows += m1[i][j];
            sum_of_col += m1[j][i];
        }
    }

    printf("sum of rows is %d\n", sum_of_rows);
    printf("sum of cols is %d\n", sum_of_col);
    return 0;
}