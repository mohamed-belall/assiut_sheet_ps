/*
 *  sheet (c)   => C. Compare
 */

// using strcmp buildin function
#include <stdio.h>
#include <string.h>

int main() {
    char x[1000000];
    char y[1000000];

 
    gets(x);
    gets(y);

    int cmp = strcmp(x, y);

    if (cmp < 0) {
        printf("%s\n", x);
    } else if (cmp > 0) {
        printf("%s\n", y);
    } else {
        printf("%s\n", x); 
    }

    return 0;
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char x[1000000];
    char y[1000000];
    int i = 0, flag = 0;
    gets(x);
    gets(y);
    if (strlen(x) < strlen(y))
    {
        for (i = 0; i <= strlen(x); i++)
        {
            if (x[i] < y[i])
            {
                printf("%s", x);
                flag = 1;
                break;
            }
            else if (x[i] > y[i])
            {
                printf("%s", y);
                flag = 1;
                break;
            }
        }
        if (!flag)
            printf("%s", x);
    }
    else
    {
        for (i = 0; i <= strlen(y); i++)
        {
            if (x[i] < y[i])
            {
                printf("%s", x);
                flag = 1;
                break;
            }
            else
            {
                printf("%s", y);
                flag = 1;
                break;
            }
        }
        if (!flag)
            printf("%s", y);
    }

    return 0;
}

*/