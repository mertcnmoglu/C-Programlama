#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
int main()
{
    int i;
    double sinus,cosinus;

    FILE *dosya;
    dosya=fopen("acilar.txt","w");

    if(dosya == NULL)
    {
        printf("Dosya bulunamadi !");
    }
    else
    {
        fprintf(dosya,"DERECE\tSİN\tCOS\n");
        fprintf(dosya,"========\t=====\t======\n");
        for(i=0;i<=360;i++)
        {
            sinus=sin(i*PI/180);
            cosinus=cos(i*PI/180);
            fprintf(dosya,"%d\t%.2lf\t%.2lf\n",i,sinus,cosinus);

        }
    }
    printf("Bilgiler dosyaya kaydedildi");
    fclose(dosya);







    return 0;
}
