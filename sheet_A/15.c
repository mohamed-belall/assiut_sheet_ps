#include <stdio.h>

int main()
{
    int a, b, result;
    char s;
    scanf("%d%c%d", &a, &s, &b);
    if (s == '*')
    {
        result = a * b;
    }
    else if (s == '+')
    {
        result = a + b;
    }
    else if (s == '-')
    {
        result = a - b;
    }
    else if (s == '/')
    {
        result = a / b;
    }

    printf("%d", result);
    return 0;
}