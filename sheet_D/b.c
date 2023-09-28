/*
 *  sheet (c)   => B - Let's use Getline
 */



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char s[1000000];

    gets(s);
    int i = 0;
    while (s[i] != '\\')
    {
        printf("%c", s[i]);
        i++;
    }

    return 0;
}