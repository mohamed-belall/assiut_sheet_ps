/*
 *	Factorial
 */

#include <stdio.h>

int main()
{
    int j, t;
    unsigned long long temp = 1;
    scanf("%d", &t);
    int n;

    while (t--)
    {
        scanf("%d", &n);
        for (j = 1; j <= n; j++)
        {
            temp *= j;
        }
        printf("%lld\n", temp);
        temp = 1;
    }

    // for (i = 0; i < t; i++)
    // {
    //     scanf("%d", &n[i]);
    // }

    // for (i = 0; i < t; i++)
    // {
    //     for (j = 1; j <= n[i]; j++)
    //     {
    //         temp *= j;
    //     }
    //     printf("%d\n", temp);
    //     temp = 1;
    // }

    return 0;
}