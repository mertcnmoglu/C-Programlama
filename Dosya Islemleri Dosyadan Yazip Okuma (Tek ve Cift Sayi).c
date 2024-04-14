#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE*dosya;

    int N,i,karakter;

    dosya=fopen("tekcift.txt","w");
    if(dosya == NULL)
    {
        printf("Dosya bulunamadi.");
    }
    else
    {
        printf("Lutfen sayi giriniz : ");
        scanf("%d",&N);
        for(i=1;i<=N;i++)
        {
            if(i%2 == 0)
            {
                fprintf(dosya,"%d = CIFT\n",i);
            }
            else
            {
                fprintf(dosya,"%d = TEK\n",i);
            }
        }
    }
    fclose(dosya);
    printf("Bilgiler dosyaya yazildi.");
    printf("\nDosya icindeki veriler asagidaki gibidir.\n");
    dosya=fopen("tekcift.txt","r");
    do
    {
        karakter=getc(dosya);
        if(karakter != EOF)
        {
            putchar(karakter);
        }
    }
    while(karakter !=EOF);
    fclose(dosya);







































    return 0;
}
