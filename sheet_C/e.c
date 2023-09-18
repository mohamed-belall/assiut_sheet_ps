/*
 *  sheet (c)   =>    E. Lowest Number
 */


#include <stdio.h>

int main()
{
    int n, i, lnum = 10000, lposition = 10000;

    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {

        if (arr[i] < lnum)
        {
            lposition = i;
            lnum = arr[i];
        }
    }

    printf("%d %d", lnum, lposition + 1);

    return 0;
}