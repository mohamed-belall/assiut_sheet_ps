/*
 *	 J - Primes from 1 to n
 */
#include <stdio.h>

int main()
{
    int n, i, flag = 0, j;

    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (i % j == 0)
                flag++;

            if (flag > 2)
                break;
        }
        if (flag == 2)
            printf("%d ", i);

        flag = 0;
    }

    return 0;
}