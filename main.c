#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *toplam;
    int n,i;
    int p = 0;
    printf("Kac adet tam sayi girilsin : ");scanf("%d",&n);

    toplam =(int *)calloc(n,sizeof(int));
    for(i=0;i<n;i++)
    {
        printf("%d. Sayi : ",i+1);
        scanf("%d",toplam+i);
        p += *(toplam+i);
    }
    printf("Toplam deger : %d",p);

    free(toplam);









    return 0;
}
