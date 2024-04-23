#include <stdio.h>
#include <stdlib.h>

int main()
{
    int satir,sutun,i,j;
    int **matris;

    printf("Satir sayisini giriniz : ");scanf("%d",&satir);
    printf("Sutun sayisini giriniz : ");scanf("%d",&sutun);

    matris = (int **)calloc(satir,sizeof(int *));


    for(i=0;i<satir;i++)
    {
        matris[i] = (int *)calloc(sutun,sizeof(int));
        for(j=0;j<sutun;j++)
        {
            printf("Matris[%d][%d] = ",i,j);
            scanf("%d",&(matris[i][j]));

        }
    }
    for(i=0;i<satir;i++)
    {
        for(j=0;j<sutun;j++)
        {
            printf("%d  ",matris[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<satir;i++)
    {
        free((void *)matris[i]);
    }

    free((void *)matris);

    // Yukarıdaki İşlem bellekten serbest bırakma işlemi !!!



    return 0;
}
