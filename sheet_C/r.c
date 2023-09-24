/*
 *  sheet (c)   => R. Permutation with arrays
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j, flag = 0;
    int temp;

    scanf("%d", &n);
    int arr[n];
    int arr2[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr2[i]);
    }
    // sort
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            if (arr2[i] > arr2[j])
            {
                temp = arr2[i];
                arr2[i] = arr2[j];
                arr2[j] = temp;
            }
        }
    }

    for (i = 0; i < n; i++)
    {

        if (arr[i] != arr2[i])
        {
            flag = 1;
            break;
        }
    }
    if (!flag)
        printf("yes");
    else
        printf("no");

    return 0;
}