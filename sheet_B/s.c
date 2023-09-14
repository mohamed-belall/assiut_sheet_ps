/*
 *	 S. Sum of Consecutive Odd Numbers
 */

#include <stdio.h>

int main()
{
    int x, y, i, sum = 0, t;
    scanf("%d", &t);

    while (t--)
    {

        scanf("%d %d", &x, &y);

        if (x > y)
        {
            for (i = (y + 1); i < x; i++)
            {
                if (i % 2 != 0)
                    sum += i;
            }
        }
        else
        {
            for (i = (x + 1); i < y; i++)
            {
                if (i % 2 != 0)
                    sum += i;
            }
        }

        printf("%d\n", sum);
        sum = 0;
    }
    return 0;
}