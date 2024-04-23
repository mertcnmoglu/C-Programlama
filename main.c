#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p,i,n;
    printf("Kac adet sayi uretilecek : ");
    scanf("%d",&n);
    p=(int *)malloc(n*sizeof(int));
    srand(time(0));

    for(i=0;i<n;i++)
    {
        *(p+i)= rand() % 100;
        printf("%d ",*(p+i));
    }
    printf("\n");
    printf("Kareleri\n");

    for(i=0;i<n;i++)
    {
        printf("%d ",*(p+i)*(*(p+i)));
    }




    return 0;
}
