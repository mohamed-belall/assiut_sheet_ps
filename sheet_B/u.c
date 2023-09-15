/*
 *	U. Some Sums
 */

#include <stdio.h>

int main()
{
    int n, a, b, i, j, temp, sum1 = 0, sum2 = 0;
    scanf("%d %d %d", &n, &a, &b);
    for (i = 1; i <= n; i++)
    {
        temp = i;
        while (temp)
        {
            sum1 = sum1 + (temp % 10);

            temp /= 10;
        }

        for (j = a; j <= b; j++)
        {
            if (sum1 == j)
            {
                sum2 += i;
            }
        }
        sum1 = 0;
    }

    printf("%d", sum2);
    return 0;
}
