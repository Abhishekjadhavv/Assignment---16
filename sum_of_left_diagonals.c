// Write a program in C to find the sum of left diagonals of a matrix.

#include <stdio.h>

int main()
{
    int m1[3][3] = {{11, 12, 13}, {14, 15, 16}, {17, 18, 19}};
    int sum = 0;

    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            if(i==j){
                sum+=m1[i][j];
                printf("%d\n",m1[i][j]);
            }
        }
    }

    printf("sum of left diagonals is %d",sum);
    return 0;
}