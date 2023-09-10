/*
 *	Max
 */

#include <stdio.h>

int main()
{
    int i, n, max = 0;
    scanf("%d", &n);
    int x;

    for (i = 0; i < n; i++)
    {
        scanf("%d", &x);
        if (x > max)
            max = x;
    }

    printf("%d", max);
    return 0;
}
