#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *toplam;
    int n,i;
    int top_deger = 0;
    float ortalama = 0.0;

    printf("Kac adet sayi girilsin : ");scanf("%d",&n);

    toplam = (int *)calloc(n,sizeof(int));

    for(i=0;i<n;i++)
    {
        printf("%d. Sayi : ",i+1);
        scanf("%d",toplam+i);
        top_deger += *(toplam+i);
    }
    ortalama = top_deger/n;
    printf("Toplam deger : %d\nOrtalamasi : %.2f",top_deger,ortalama);

    free(toplam);

    return 0;
}
