/*
 *	R. Sequence of Numbers and Sum
 */

#include <stdio.h>

int main()
{
    int m, n, i, sum = 0;

    while (1)
    {

        scanf("%d %d", &n, &m);
        if ((n > 0) && (m > 0))
        {
            if (n > m)
            {
                for (i = m; i <= n; i++)
                {
                    printf("%d ", i);
                    sum += i;
                }
            }
            else
            {
                for (i = n; i <= m; i++)
                {
                    printf("%d ", i);
                    sum += i;
                }
            }

            printf("sum =%d\n", sum);
            sum = 0;
        }
        else
        {
            break;
        }
    }
    return 0;
}