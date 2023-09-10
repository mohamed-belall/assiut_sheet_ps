#include <stdio.h>

int main()
{
    long long n;
    int year = 0, month = 0, days = 0;

    scanf("%lld", &n);
    if (n >= 365)
    {
        do
        {
            year++;
            n -= 365;
        } while (n >= 365);
    }

    if (n >= 30)
    {
        do
        {
            month++;
            n -= 30;
        } while (n >= 30);
    }

    days = n;
    printf("%d years\n%d months\n%d days", year, month, days);

    return 0;
}