#include <stdio.h>
#include <stdlib.h>

int faktoriyel(int *sayi)
{
    int sonuc = 1;
    int i;
    for(i=*sayi;i>=1;i--)
    {
        sonuc *=(*sayi);
        (*sayi)--;
    }
    return sonuc;
}






int main()
{

    int n,orijinalsayi;
    printf("Faktoriyeli hesaplanacak sayiyi giriniz\n");
    scanf("%d",&n);
    orijinalsayi=n;
    printf("%d! = %d",orijinalsayi,faktoriyel(&n));




    return 0;
}
