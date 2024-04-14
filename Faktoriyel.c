#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fak=1;
    int i=1;
    int n;

    printf("Faktoriyel hesaplamak istediginiz sayiyi giriniz : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        fak=fak*i;
    }
    printf("%d! = %d",n,fak);


    return 0;
}
