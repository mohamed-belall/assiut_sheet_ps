/*
 *  sheet (c)   =>  S. Search In Matrix
 */


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;

    int r, c, x, flag = 0;

    scanf("%d %d", &r, &c);
    int arr[r][c];

    // sort
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    scanf("%d", &x);
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (arr[i][j] == x)
            {
                flag = 1;
                break;
            }
        }
    }

    if (flag)
        printf("will not take number");
    else
        printf("will take number");

    return 0;
}
