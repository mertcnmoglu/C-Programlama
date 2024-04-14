#include <stdio.h>
#include <stdlib.h>

int main()
{
    char mert[100]="mert isa"; //DİZİMİN İSMİ DİZİNİN İLK ELEMANININ ADRESİNE EŞİTTİR.
    char *p1;

    p1=mert;

    printf("Dizimin 6.karakteri %c ",*(p1+1));



    int mert[]={10,20,30,40,50};
    int *ptr;

    ptr=mert;
    ptr++;

    //ptr++ ve (ptr+1) aynı şeydir!
    printf("%d",ptr);
    //6422016
    //6422020*/



    /*int tab[100];
    int i;

    for(i=0;i<100;i++)
    {
        tab[i]=0;                   //NORMAL DİZİ ŞEKLİNDE
    }
    for(i=0;i<100;i++)
    {
        printf("%d\n",tab[i]);
    }*/


    /*int tab[100];
    int i;
    int *pt;

    for(pt=tab;pt<tab+100;pt++)
    {
        *pt=0;
    }
    for(pt=tab;pt<tab+100;pt++)
    {
        *pt=0;                      //POİNTERLA YAPILIŞ
    }
    for(pt=tab;pt<tab+100;pt++)
    {
        printf("%d\n",*pt);
    }*/














    return 0;
}
