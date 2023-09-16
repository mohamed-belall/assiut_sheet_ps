/*
 *	X. Convert To Decimal 2
 */


#include <stdio.h>

int main()
{
    int t, i, result = 1, y;
    long long n;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%lld", &n);

        while (n)
        {
            y = (n % 2);
            if (y == 1)
            {
                result *= 2;
            }
            n /= 2;
        }
        result--;
        printf("%d\n", result);
        result = 1;
    }
    return 0;
}