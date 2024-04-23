#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int N;
    int *p;

    printf("N sayisini giriniz : ");scanf("%d",&N);

    p=(int *)malloc(N*sizeof(int));

    for(i=0;i<N;i++)
    {
        printf("%d. sayi : ",i);
        scanf("%d",&(*(p+i)));
    }
    for(i=0;i<N;i++)
    {
        printf("%d\n",*(p+i));

    }






    return 0;
}
