/*
 *  sheet (c)   =>    I. Smallest Pair
 */

#include <stdio.h>

int main()
{
    int t, n, i, j;
    long long eq;

    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        int arr[n];
        long long min = 1e9;
        for (i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }

        for (i = 1; i <= n; i++)
        {
            for (j = i + 1; j <= n; j++)
            {
                eq = arr[i - 1] + arr[j - 1] + j - i;

                if (eq < min)
                {
                    min = eq;
                }
            }
        }
        printf("%lld\n", min);
    }

    return 0;
}