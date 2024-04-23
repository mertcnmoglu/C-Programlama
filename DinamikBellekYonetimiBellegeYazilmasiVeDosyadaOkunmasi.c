#include <stdio.h>
#include <stdlib.h>

int main()
{

    FILE *dosya;
    int n,c;

    printf("Kac adet tam sayi girilecek\n");
    scanf("%d",&n);

    int *p1;

    p1=(int*)malloc(n*sizeof(int));
    dosya = fopen("sayi.txt","w");
    srand(time(0));

    printf("Uretilen sayilar\n");

    for(int i = 0;i < n;i++)
    {
        *(p1+i) = rand() % 100;
        fprintf(dosya,"%d ",*(p1+i));
        printf("%d ",*(p1+i));
    }
    printf("\n");
    fclose(dosya);
    printf("Okunan sayilar\n");


    dosya = fopen("sayi.txt","r");

    do
    {
        c=getc(dosya);
        if(c != EOF)
        {
            putchar(c);
        }
    }
    while(c != EOF);

    fclose(dosya);

    free(p1);



    return 0;
}
