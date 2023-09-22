/*
 *  sheet (c)   =>   N - Check Code 
 */


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, a, b, n, counter = 0;
    int flag = 0;

    scanf("%d %d", &a, &b);
    n = a + b + 1;
    char s[n];
    for (i = 0; i <= n; i++)
    {
        scanf("%c", &s[i]);
    }

    if (s[a + 1] != '-')
    {
        flag = 1;
    }
    // if (sizeof(s) != n)
    // {
    //     flag = 1;
    // }

    for (i = 0; i <= n; i++)
    {
        if ((s[i] <= '9') && (s[i] >= '0') && (i != a + 1))
        {
            counter++;
        }
    }
    if (counter != a + b)
        flag = 1;

    if (!flag)
        printf("Yes");
    else
        printf("No");

    return 0;
}