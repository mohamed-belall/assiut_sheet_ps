#include <stdio.h>

int main()
{
    long long a, b, c;
    scanf("%lld%lld%lld", &a, &b, &c);

    if (a <= b && a <= c)
    {
        printf("%lld\n", a);
        if (b <= c)
        {
            printf("%lld\n", b);
            printf("%lld\n", c);
        }
        else
        {
            printf("%lld\n", c);
            printf("%lld\n", b);
        }
    }

    else if (b <= c && b <= a)
    {
        printf("%lld\n", b);
        if (a <= c)
        {
            printf("%lld\n", a);
            printf("%lld\n", c);
        }
        else
        {
            printf("%lld\n", c);
            printf("%lld\n", a);
        }
    }
    else
    {
        printf("%lld\n", c);
        if (b <= a)
        {
            printf("%lld\n", b);
            printf("%lld\n", a);
        }
        else
        {
            printf("%lld\n", a);
            printf("%lld\n", b);
        }
    }
    printf("\n");
    printf("%lld\n%lld\n%lld", a, b, c);

    return 0;
}