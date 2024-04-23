#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m;
    int *dizi1,*dizi2,*sonuc;
    int sayac = 0;
    int i;


    printf("1. dizi icin kac adet sayi girilecek : ");scanf("%d",&n);
    printf("2. dizi icin kac adet sayi girilecek : ");scanf("%d",&m);

    dizi1 = (int *)malloc(n*sizeof(int));
    dizi2 = (int *)calloc(m,sizeof(int));

    srand(time(0));

    printf("1. Dizi elemanlari\n");

    for(i=0;i<n;i++)
    {
        *(dizi1+i) = rand() % 100;
        printf("%d  ",*(dizi1+i));
    }
    printf("\n2. Dizi elemanlari\n");
    for(i=0;i<m;i++)
    {
        *(dizi2+i) = rand() % 100;
        printf("%d  ",*(dizi2+i));
    }

    sonuc = calloc(n+m,sizeof(int));

    printf("\nBirlestirilmis dizi\n");

    for(i=0;i<n;i++)
    {
        *(sonuc+sayac) = *(dizi1+i);
        sayac++;
    }
    for(i=0;i<m;i++)
    {
        *(sonuc+sayac) = *(dizi2+i);
        sayac++;
    }
    for(i=0;i<sayac;i++)
    {
        printf("%d  ",*(sonuc+i));
    }

    free(dizi1);
    free(dizi2);
    free(sonuc);



    return 0;
}
