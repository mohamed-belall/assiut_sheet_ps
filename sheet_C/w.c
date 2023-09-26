/*
 *  sheet (c)   => W. Mirror Array
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;

    int n, m, temp;

    scanf("%d %d", &n, &m);
    long long arr[n][m];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%lld", &arr[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = m - 1; j >= 0; j--)
        {
            printf("%lld ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}