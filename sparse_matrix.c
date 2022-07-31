// Write a program in C to accept a matrix and determine whether it is a sparse matrix.

#include <stdio.h>

int main()
{
    int m = 3, n = 3, count = 0;
    int m1[m][n];

    printf("Enter 9 element in the natrix\n");

    for (int i = 0; i <= 2; i++)
        for (int j = 0; j <= 2; j++)
            scanf("%d", &m1[i][j]);

    for (int i = 0; i <=2; i++)
    {
        for (int j = 0; j <=2; j++)
        {
             if(m1[i][j] == 0)
                 count++;
        }
    }

    if(count>(m*n)/2){
        printf("Given matrix is a sparse matrix");  
    }else{
        printf("Given matrix is not a sparse matrix");
    }
    return 0;
}