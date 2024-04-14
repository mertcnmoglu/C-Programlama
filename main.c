#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *dosya;

    char satir[100],dosyaismi[100];
    char *arr;
    printf("Dosya yolunu ve ismini veriniz\n");
    gets(dosyaismi);

    dosya=fopen(dosyaismi,"r");

    if(dosya == NULL)
    {
        printf("Dosya bulunamadi.");
    }
    else
    {
        do
        {
            arr=fgets(satir,100,dosya);
            if(arr != NULL)
            {
                printf("%s",satir);
            }
        }
        while(arr != NULL);
        fclose(dosya);
    }













    return 0;
}
