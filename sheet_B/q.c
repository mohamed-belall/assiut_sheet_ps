/*
 *	 Q. Digits
 */

#include <stdio.h>

int main()
{
    int t;
    long long n;
    scanf("%d", &t);

    while (t--)
    {
        scanf("%lld", &n);
        if (!n)
        {
            printf("0 ");
        }
        else
        {
            while (n)
            {
                printf("%d ", (n % 10));
                n /= 10;
            }
        }

        printf("\n");
    }
    return 0;
}