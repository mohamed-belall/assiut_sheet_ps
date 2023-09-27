/*
 *  sheet (c)   => X. 8 Neighbors
 */
    

    #include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;

    int n, m;

    scanf("%d %d", &n, &m);

    char arr[101][101];

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {

            scanf(" %c", &arr[i][j]);
        }
    }

    int x, y;
    scanf("%d %d", &x, &y);

    if ((arr[x - 1][y] != '.') &&
        (arr[x + 1][y] != '.') &&
        (arr[x][y + 1] != '.') &&
        (arr[x][y - 1] != '.') &&
        (arr[x - 1][y + 1] != '.') &&
        (arr[x - 1][y - 1] != '.') &&
        (arr[x + 1][y + 1] != '.') &&
        (arr[x + 1][y - 1] != '.'))
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }

    return 0;
}