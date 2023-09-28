/*
 *  sheet (c)   => A. Create A New String
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char s[10000];
    char t[10000];
    gets(s);
    gets(t);
    printf("%d %d\n%s %s", strlen(s), strlen(t), s, t);

    return 0;
}
