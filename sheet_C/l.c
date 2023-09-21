/*
 *  sheet (c)   =>   L. Max Subarray
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, x, t, j, current_max;

    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        int arr[n];
        for (i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            printf("%d ", arr[i]);
        }
        for (i = 0; i < n; i++)
        {

            for (j = i + 1; j < n; j++)
            {
                if (j == (i + 1))
                {
                    current_max = arr[i];
                }

                if (current_max < arr[j])
                {
                    current_max = arr[j];
                }
                printf("%d ", current_max);
            }
        }
        printf("\n");
    }

    return 0;
}