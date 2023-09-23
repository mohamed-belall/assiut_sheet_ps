/*
 *  sheet (c)   =>  Q. Count Subarrays
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, t, j, count = 0;

    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        int arr[n];
        for (i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        count = n;

        if (n > 1)
        {
            for (i = 0; i < n; i++)
            {

                for (j = i + 1; j < n; j++)
                {

                    if (arr[j] < arr[j - 1])
                        break;

                    count++;
                }
            }
        }

        printf("%d\n", count);
    }

    return 0;
}
