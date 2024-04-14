#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *giris,*cikis;
    char kaynak[100],hedef[100],karakter;

    printf("Lutfen yedeklenecek dosyanin adini ve uzantisini giriniz\n");
    gets(kaynak);

    giris=fopen(kaynak,"r");

    if(giris == NULL)
    {
        printf("Dosya bulunamadi\n");
    }
    else
{
        printf("Lutfen yedeklenecek dosyanin adini ve uzantisini giriniz\n");
    gets(hedef);

    cikis=fopen(hedef,"w");

    if(cikis == NULL)
    {
        printf("Dosya bulunamadi\n");
    }

    for(karakter=getc(giris);karakter != EOF;karakter=getc(giris))
    {
        putc(karakter,cikis);
    }

}


    printf("Yedekleme islemi basariyla tamamlandi.");

    fclose(giris);
    fclose(cikis);

    return 0;
}
