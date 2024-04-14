#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cumle[100];
    int N,i;
    FILE *dosya;
    dosya=fopen("bilgi.txt","w");

    if(dosya == NULL)
    {
        printf("Dosya olusturulamadi");
    }
    else
    {
        printf("Lutfen cumle giriniz\n");
        gets(cumle);
        printf("Kac defa alt alta yazilsin : ");
        scanf("%d",&N);
        for(i=1;i<=N;i++)
        {
            fprintf(dosya,"Satir No %d : Cumle : %s \n",i,cumle);
        }
        fclose(dosya);
        printf("Bilgiler dosyaya yazildi.");
    }

    return 0;
}
