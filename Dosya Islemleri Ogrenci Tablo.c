#include <stdio.h>
#include <stdlib.h>

struct ogrenci{
char adsoyad[50];
char ders[50];
int vize1,vize2,finalnotu;
};


int main()
{
    FILE *dosya;

    int N,i;
    float ort;
    printf("Ogrenci sayisini giriniz\n");
    scanf("%d",&N);

    struct ogrenci ogr[N];
    dosya=fopen("dersler.txt","w");
    if(dosya == NULL)
    {
        printf("Dosya olusturulamadi.");
    }
    else
    {
        for(i=0;i<N;i++)
        {
            fflush(stdin);
            printf("Adi Soyadi : ");
            gets(ogr[i].adsoyad);
            printf("Ders adlari : ");
            gets(ogr[i].ders);
            printf("Vize 1 Notu : ");
            scanf("%d",&ogr[i].vize1);
            printf("Vize 2 Notu : ");
            scanf("%d",&ogr[i].vize2);
            printf("Final Notu : ");
            scanf("%d",&ogr[i].finalnotu);
            ort=(float)ogr[i].vize1*0.2+(float)ogr[i].vize2*0.2+(float)ogr[i].finalnotu*0.6;
            fprintf(dosya,"%s\t %s\t %d\t %d\t %d\t %.2f\n",ogr[i].adsoyad,ogr[i].ders,ogr[i].vize1,ogr[i].vize2,ogr[i].finalnotu,ort);
        }
        fclose(dosya);
    }








    return 0;
}
