#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *dosya;
    FILE *dosya2;

    char dosya_ismi[50];
    char dosya_ismi2[50];

    char cumle[100];
    char *karakter;

    printf("Yedeklenecek dosyanin ismini girin: ");
    fflush(stdin);
    gets(dosya_ismi);

    printf("Yedek dosyanin ismini girin: ");
    fflush(stdin);
    gets(dosya_ismi2);

    dosya=fopen(dosya_ismi,"r");
    dosya2=fopen(dosya_ismi2,"w");

    if(dosya==NULL)
    {
        printf("Boyle bir dosya bulunamadi..");
    }
    else
    {
        do{
            karakter=fgets(cumle,100,dosya);
            if(karakter != NULL)
            {
                fputs(karakter, dosya2);
            }

        }while(karakter!=NULL);
    }

    fclose(dosya);
    fclose(dosya2);
    printf("Yedekleme islemi basariyla yapildi..");


    return 0;
}
