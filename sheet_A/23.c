#include <stdio.h>

int main()
{
    int a, b, c;
    char s, q;
    scanf("%d %c %d %c %d", &a, &s, &b, &q, &c);
    switch (s)
    {
    case '+':
        if (a + b == c)
            printf("Yes");
        else
            printf("%d", a + b);
        break;
    case '-':
        if (a - b == c)
            printf("Yes");
        else
            printf("%d", a - b);
        break;
    case '*':
        if (a * b == c)
            printf("Yes");
        else
            printf("%d", a * b);
        break;
    default:
        break;
    }
    return 0;
}