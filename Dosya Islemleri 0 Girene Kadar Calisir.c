#include <stdio.h>
#include <stdlib.h>

int main()
{

    //0 girene kadar çalışan program

    FILE *dosya;

    char kelime[100];

    while(1)
    {
        printf("Lutfen kelime giriniz\n");
        gets(kelime);
        if(kelime[0] == '0')
        {
            exit(1);
        }
        else
        {
            dosya=fopen("kelimeler.txt","a");
            if(dosya == NULL)
            {
                printf("Dosya bulunamadi.");
            }
            else
            {
                fprintf(dosya,"%s\n",kelime);
                fclose(dosya);
            }
        }
    }


    return 0;
}
