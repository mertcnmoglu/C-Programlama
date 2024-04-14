#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char dizi[100];
    char eleme;
    char *mert;

    printf("Lutfen bir karakter dizisi giriniz\n");
    gets(dizi);

    printf("Hangi karakter silinsin : ");
    scanf("%c",&eleme);

    for(mert=dizi;*mert;mert++)
    {
        if(*mert == eleme)
        {
            strcpy(mert,mert+1);
        }
    }

    printf("Karakter silindikten sonra dizim : %s",dizi);



    return 0;
}
