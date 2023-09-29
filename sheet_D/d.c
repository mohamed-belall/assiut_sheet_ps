/*
 *  sheet (c)   => D. Strings
 */


#include <stdio.h>
#include <string.h>
int main()
{
    char a[1000000];
    char b[1000000];
    char temp;
    gets(a);
    gets(b);
    int a_size = strlen(a);
    int b_size = strlen(b);
    printf("%d %d\n", a_size, b_size);
    printf("%s\n", strcat(a, b));
    a[a_size] = '\0';
    temp = a[0];
    a[0] = b[0];
    b[0] = temp;

    printf("%s %s", a, b);
    return 0;
}
