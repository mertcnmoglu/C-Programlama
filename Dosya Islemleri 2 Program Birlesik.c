#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *d1,*d2,*d3;
    char karakter;

    d1=fopen("bilgiler.txt","r");
    d2=fopen("veriler.txt","r");
    d3=fopen("okuma.txt","w");

    if(d1 == NULL || d2 == NULL || d3 == NULL)
    {
        printf("Dosya okuma ya da olusturma hatasi algilandi.");
    }
    else
    {
        do
        {
            karakter=getc(d1);
            if(karakter != EOF)
            {
                fprintf(d3,"%c",karakter);
            }
        }
        while(karakter != EOF);
        fprintf(d3,"\n");
        do
        {
            karakter=getc(d2);
            if(karakter != EOF)
            {
                fprintf(d3,"%c",karakter);
            }
        }
        while(karakter != EOF);
        printf("Islem basarili.");
        fclose(d1);
        fclose(d2);
        fclose(d3);
    }

















    return 0;
}
