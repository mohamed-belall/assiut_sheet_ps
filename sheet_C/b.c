/*
 *  sheet (c)   =>   B. Searching
 */

#include <stdio.h>

int main()
{
    int n, x, i, flag = 0;

    scanf("%d", &n);
    long long arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }

    scanf("%d", &x);

    for (i = 0; i < n; i++)
    {

        if (arr[i] == x)
        {
            printf("%d", i);
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("-1");

    return 0;
}
