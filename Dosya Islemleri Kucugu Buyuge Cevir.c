#include <stdio.h>
#include <stdlib.h>


int main()
{
    FILE *d1,*d2;
    char karakter;

    d1=fopen("Bilgiler.txt","r");
    d2=fopen("buyuk.txt","w");

    if(d1 == NULL || d2 == NULL)
    {
        printf("Dosya okuma islemi basarisiz...");
    }
    else
    {
        do
        {
            karakter=getc(d1);
            if(karakter >= 'a' && karakter <= 'z')
            {
                fprintf(d2,"%c",karakter-32);
            }
            else
            {
                fprintf(d2,"%c",karakter);
            }
        }
        while(karakter != EOF);
        printf("Islem basarili...");
        fclose(d1);
        fclose(d2);
    }


    return 0;
}
