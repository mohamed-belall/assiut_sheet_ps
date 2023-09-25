/*
 *  sheet (c)   => T - Matrix
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;

    int n, pDiagonal = 0, sDiagonal = 0, flag = 0;

    scanf("%d", &n);
    int arr[n][n];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        pDiagonal += arr[i][i];
        sDiagonal += arr[i][n - i - 1];
        // printf("%d\t%d\t%d\t%d\n", arr[i][i], arr[i][n - i - 1], pDiagonal, sDiagonal);
    }

    if ((pDiagonal - sDiagonal) > 0)
        printf("%d", (pDiagonal - sDiagonal));
    else
        printf("%d", (-1 * (pDiagonal - sDiagonal)));

    return 0;
}