/*
 *  sheet (c)   => U - Is B a subsequence of A ?
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j = 0;

    int n, m;

    scanf("%d %d", &n, &m);
    int arr[n];
    int arr2[m];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < m; i++)
    {
        scanf("%d", &arr2[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (arr[i] == arr2[j])
        {
            j++;
        }
    }


    if (j == m)
        printf("YES");

    else
        printf("NO");

    return 0;
}