#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *metin;
    int i = 0,j = 0;;
    metin = (char *)malloc(100*sizeof(char));

    printf("Lutfen cumle giriniz\n");gets(metin);

    while(i < strlen(metin))
    {
        j=0;
        while(j <= i)
        {
            printf("%c ",*(metin+j));
            j++;
        }
        printf("\n");
        i++;
    }

    free(metin);


    return 0;
}
