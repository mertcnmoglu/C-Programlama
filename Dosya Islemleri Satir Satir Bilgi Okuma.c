#include <stdio.h>
#include <stdlib.h>

int main()
{
    char satir[100],*karakter;

    FILE *dosya;
    dosya=fopen("bilgi.txt","r");
    if(dosya == NULL)
    {
        printf("Dosya bulunamadi.");
    }
    else
    {
        do
        {
            karakter=fgets(satir,100,dosya);
            if(karakter != NULL)
            {
                printf("%s",satir);
            }
        }
        while(karakter != NULL);
        fclose(dosya);
        printf("\nOkuma islemi tamamlandi.");
    }


    return 0;
}
