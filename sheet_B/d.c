/*
 *	Fixed Password
 */
#include <stdio.h>

int main()
{
    int password;
    scanf("%d", &password);
    while (password != 1999)
    {
        printf("Wrong\n");
        scanf("%d", &password);
    }
    printf("Correct\n");
    return 0;
}