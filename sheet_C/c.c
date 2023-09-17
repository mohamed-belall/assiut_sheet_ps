/*
 *  sheet (c)   =>    C. Replacement
 */

#include <stdio.h>

int main()
{
    int n, i;

    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

        if (arr[i] < 0)
            arr[i] = 2;
        else if (arr[i] > 0)
            arr[i] = 1;
    }

    for (i = 0; i < n; i++)
    {

        printf("%d ", arr[i]);
    }

    return 0;
}