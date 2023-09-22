/*
 *  sheet (c)   =>  O. Fibonacci
 */

#include <stdio.h>

int main()
{
    long long n;
    int i;
    scanf("%lld", &n);
    long long fib[n];
    fib[0] = 0; // fib(1)
    fib[1] = 1; // fib(2)

    for (i = 2; i < n; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    printf("%lld ", fib[n - 1]);

    return 0;
}