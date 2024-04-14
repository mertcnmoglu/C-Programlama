#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char sys_kullanici_adi[100] = "Mert";
    char sys_parola[100] = "321123";
    int giris_hakki = 3;
    char kullanici_adi[100];
    char parola[100];

    while(1)
    {
        printf("Kullanici Adinizi Giriniz : \n");
        gets(kullanici_adi);
        printf("Parolanizi Giriniz : \n");
        gets(parola);

        if(strcmp(sys_kullanici_adi,kullanici_adi) != 0 && strcmp(sys_parola,parola) == 0)
        {
            printf("Kullanici Adi Hatali.\n");
            giris_hakki --;
        }
        else if(strcmp(sys_kullanici_adi,kullanici_adi) != 0 && strcmp(sys_parola,parola) != 0)
        {
            printf("Kullanici Adi ve Parola Hatali.\n");
            giris_hakki--;
        }
        else if(strcmp(sys_kullanici_adi,kullanici_adi) == 0 && strcmp(sys_parola,parola) != 0)
        {
            printf("Parola Hatali.\n");
            giris_hakki--;
        }
        else
        {
            printf("Basariyla Giris Yapildi.\n");
            break;
        }
        if(giris_hakki == 0)
        {
            printf("Giris Haklariniz Bitti.\n");
            break;
        }
    }





    return 0;
}
