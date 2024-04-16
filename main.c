#include <stdio.h>
#include <stdlib.h>

int main()
{

    FILE *dosya;
    dosya=fopen("bilgi.txt","a");
    char cumle[200];
    int i;

    if(dosya == NULL)
    {
        printf("Dosya bulunamadi.");
    }
    else
    {
        printf("Lutfen cumle giriniz\n");
        gets(cumle);

        for(i=0;cumle[i];i++)
        {
            putc(cumle[i],dosya);
        }
    }
    putc('\n',dosya);
    fclose(dosya);
    printf("Bilgiler basariyla eklendi.");

    return 0;
}
