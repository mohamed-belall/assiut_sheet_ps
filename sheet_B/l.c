/*
 *	 L. GCD
 */

#include <stdio.h>

int main()
{
    int a, b, greatest, i;

    scanf("%d %d", &a, &b);
    if (a > b)
    {
        for (i = 1; i <= b; i++)
        {
            if (((a % i) == 0) && ((b % i) == 0))
                greatest = i;
        }
    }
    else
    {
        for (i = 1; i <= b; i++)
        {
            if (((a % i) == 0) && ((b % i) == 0))
                greatest = i;
        }
    }
    printf("%d", greatest);

    return 0;
}