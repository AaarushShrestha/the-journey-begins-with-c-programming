#include <stdio.h>
#include <conio.h>
int main()
{
    int a[3][3], b[3][3], sum[3][3], i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("enter the elements in a:a[%d][%d]",i,j);
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("enter the elements in b:b[%d][%d]",i,j);
            scanf("%d", &b[i][j]);
        }
    }
    for (i = 0; i < 3; i++)

    {
        for (j = 0; j < 3; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    for (i = 0; i < 3; i++)

    {
        for (j = 0; j < 3; j++)
        {
            printf("%10d", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}