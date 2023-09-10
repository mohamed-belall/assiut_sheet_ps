#include <stdio.h>

int main()
{
    long long a, b, c, d, mull;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
    a %= 100;
    b %= 100;
    c %= 100;
    d %= 100;
    mull = (a * b * c * d) % 100;
    if (mull < 10)
        printf("0%lld", mull);

    else
        printf("%lld", mull);

    return 0;
}
