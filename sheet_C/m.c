/*
 *  sheet (c)   =>   M. Replace MinMax
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, max = 0, maxi = 0, min = 1e9, mini = 0, swap;

    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

        if (arr[i] > max)
        {
            max = arr[i];
            maxi = i;
        }
        if (arr[i] < min)
        {
            min = arr[i];
            mini = i;
        }
    }

    swap = arr[maxi];
    arr[maxi] = arr[mini];
    arr[mini] = swap;

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}