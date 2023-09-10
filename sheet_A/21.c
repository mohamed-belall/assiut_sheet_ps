#include <stdio.h>

int main()
{
    float x;
    scanf("%f", &x);
    int y = (int)x;
    if (x - y > 0)
    {
        printf("float %d %.3f", y, x - y);
    }
    else
    {
        printf("int %d", y);
    }

    return 0;
}