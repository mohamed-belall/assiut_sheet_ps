#include <stdio.h>
int main()
{
    char x;
    scanf("%c", &x);
    if ((x >= 'a') && (x <= 'z'))
    {
        x -= 32;
    }
    else
    {
        x += 32;
    }
    printf("%c", x);
    return 0;
}