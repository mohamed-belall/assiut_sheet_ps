/*
 *	Even, Odd, Positive and Negative
 */

#include <stdio.h>

int main()
{
    int i, n, x, even = 0, odd = 0, positive = 0, negative = 0;
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &x);
        if (x % 2 == 0)
            even++;
        else
            odd++;

        if (x > 0)
            positive++;
        else if (x < 0)
            negative++;
    }

    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d", even, odd, positive, negative);
    return 0;
}