#include <stdio.h>
#include <stdlib.h>
#define N 10
int main()
{
    /*int i,max,min;
    int mert[N];
    printf("%d eleman deger giriniz\n",N);
    /*for(i = 0; i<N; i++)
    {
        scanf("%d",&mert[i]);
    }*/
    /*for(i = 0; i<N; i++)
    {
        scanf("%d",mert+i); //mert int mert[N] dizisinin ilk elemanını tutar
    }
    max=min=*mert;
    for(i = 1; i < N; i++)
    {
        if(*(mert+i) > max)
        {
            max = *(mert+i);
        }
        if(*(mert+i) < min)
        {
            min = *(mert+i);
        }
    }
    printf("Maksimum degerimiz : %d\n",max);
    printf("Minimum degerimiz : %d",min);*/

    int i,min,max;
    int *isa;
    int mert[N];
    printf("%d eleman sayi giriniz\n",N);
    for(isa = mert; isa < mert+N; isa++)
    {
        scanf("%d",isa);
    }
    max=min=mert[0];
    for(isa = mert+1; isa < mert+N; isa++) //isa int mert[N] dizisinin mert+1. elemanına eşit oldu(yani isa dizinin ilk elemanı + adresine eşit oldu
    {
        if(*isa > max)
        {
            max = *isa;
        }
        if(*isa < min)
        {
            min = *isa;
        }
    }
    printf("Maksimum degerimiz : %d\n",max);
    printf("Minimum degerimiz : %d\n",min);




    return 0;
}
