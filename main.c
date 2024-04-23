#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p1,*p2,n;
    int cift = 0;
    int tek = 0;


    printf("Tam sayi giriniz : ");
    scanf("%d",&n);

    p1 = (int*)malloc(n*sizeof(int));
    p2 = (int*)calloc(n,sizeof(int));

    for(int i = 0;i < n;i++)
    {
        if(i %2 == 0)
        {
            *(p1 + cift) = i;
            cift++;
        }
        else
        {
            *(p2 + tek) = i;
            tek++;
        }
    }

    printf("Cift Sayilar\n");


    for(int i = 0;i < cift;i++)
    {
        printf("%d ",*(p1+i));
    }
    printf("\n");
    printf("Tek sayilar\n");
    for(int i = 0;i < tek;i++)
    {
        printf("%d ",*(p2+i));
    }

    free(p1);
    free(p2);




    return 0;
}
