#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    int *p;
    int enk;

    printf("Kac adet sayi uretilsin\n");
    scanf("%d",&n);

    p = (int*)malloc(n*sizeof(int));

    srand(time(0));
    for(i=0;i<n;i++)
    {
        *(p+i)=rand() % 50;
        printf("%d ",*(p+i));
    }
    printf("\n");
    enk = *p;
    for(i=1;i<n;i++)
    {
        if(*(p+i) < enk)
        {
            enk = *(p+i);
        }
    }

    printf("En kucuk tam sayi = %d",enk);
    free(p);











    return 0;
}
