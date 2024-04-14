#include <stdio.h>
#include <stdlib.h>

int main()
{
    char karakter;

    FILE *dosya;
    dosya=fopen("bilgi.txt","r");

    if(dosya == NULL)
    {
        printf("Dosya olusturulamadi.");
    }
    else
    {
        do
        {
            karakter=getc(dosya);
            if(karakter != EOF)
            {
                putchar(karakter);
            }
        }
        while(karakter != EOF);
    }
    fclose(dosya);
    printf("\nOkuma islemi basari ile tamamlandi.");









    return 0;
}
