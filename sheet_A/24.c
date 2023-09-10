#include <stdio.h>

int main()
{
    long long l1, r1, l2, r2;
    scanf("%lld %lld %lld %lld", &l1, &r1, &l2, &r2);

    if ((r1 < l2) || (r2 < l1))
    {
        printf("-1");
    }
    else
    {
        if (l1 > l2)
            printf("%lld ", l1);
        else
            printf("%lld ", l2);

        if (r1 < r2)
            printf("%lld", r1);
        else
            printf("%lld", r2);
    }

    return 0;
}