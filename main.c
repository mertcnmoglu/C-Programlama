#include <stdio.h>
#include <stdlib.h>

void dizi_olustur(int *e,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        e[i] = rand() % 100;
        printf("%d ",e[i]);
    }
}
void diziyi_sirala(int *e,int n)
{
    int i,j;
    int gecici;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(e[j] > e[j+1])
            {
                gecici = e[j];
                e[j] = e[j+1];
                e[j+1] = gecici;
            }
        }
    }
    printf("\nDizinin siralanmis hali.\n");
    for(i=0;i<n;i++)
    {
        printf("%d  ",e[i]);
    }
}
void dizi_buyuk(int *e,int n)
{
    int i;
    int enb;
    enb = *e;
    for(i=0;i<n;i++)
    {
        if(*(e+i) > enb)
        {
            enb = *(e+i);
        }
    }
    printf("\nEn buyuk eleman : %d\n",enb);
}


int main()
{
    int n;
    int *p;

    printf("Lutfen kac adet sayi uretilecegini giriniz : ");scanf("%d",&n);

    srand(time(0));

    p = (int *)malloc(n*sizeof(int));

    dizi_olustur(p,n);
    diziyi_sirala(p,n);
    dizi_buyuk(p,n);
    free(p);

















    return 0;
}
