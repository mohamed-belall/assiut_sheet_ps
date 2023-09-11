/*
 *	I - Palindrome
 */


#include <stdio.h>

int main()
{
    long long n, temp;
    long long result = 0;
    scanf("%lld", &n);
    temp = n;
    do
    {
        result = (result * 10) + (n % 10);
        n /= 10;
    } while (n);

    printf("%lld", result);

    if (result == temp)
        printf("\nYES");
    else
        printf("\nNO");
    return 0;
}