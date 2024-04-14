#include <stdio.h>
#include <stdlib.h>

int main()
{
    char mert[100]={'b','o','n','j','o','u','r','\0'};
    char *tab;

    tab=mert;

    printf("%c\n",*(tab+2));

    return 0;
}
