#include <stdio.h>

int main()
{
    float x, y;

    scanf("%f%f", &x, &y);

    if (x > 0 && y > 0) // + +   => Q1
    {
        printf("Q1");
    }
    else if (x < 0 && y > 0) // - +   => Q2
    {
        printf("Q2");
    }
    else if (x < 0 && y < 0) // - -   => Q3
    {
        printf("Q3");
    }
    else if (x > 0 && y < 0) // + -   => Q4
    {
        printf("Q4");
    }
    else if (x == 0 && y == 0) // Origem
    {
        printf("Origem");
    }
    else if (x == 0 && y != 0) // Eixo Y
    {
        printf("Eixo Y");
    }
    else if (x != 0 && y == 0) // Eixo X
    {
        printf("Eixo X");
    }

    return 0;
}