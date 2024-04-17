#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*int *ptr;

    int n = 5;
    int i;
    printf("Girdigim sayinin degeri %d\n",n);

    ptr=(int *)calloc(n,sizeof(int));

    if(ptr == NULL)
    {
        printf("Yeterli hafiza ayrilamadi..!");
    }
    else
    {
        for(i=0;i<n;i++)
        {
            ptr[i]=i+1;
        }
        printf("Elemanlarim\n");
        for(i=0;i<n;i++)
        {
            printf("%d, ",ptr[i]);
        }
        free(ptr);
    }*/


    /*int *ptr;

    int n = 5;
    int i;
    printf("Girdigim sayinin degeri %d\n",n);

    ptr=(int *)malloc(n*sizeof(int));

    if(ptr == NULL)
    {
        printf("Yeterli hafiza ayrilamadi..!");
    }
    else
    {
        for(i=0;i<n;i++)
        {
            ptr[i]=i+1;
        }
        printf("Elemanlarim\n");
        for(i=0;i<n;i++)
        {
            printf("%d, ",ptr[i]);
        }
        free(ptr);
    }*/

    int *ptr1,*ptr2;

    int n = 5;
    int i;
    printf("Girdigim sayinin degeri %d\n",n);


    ptr1=(int *)malloc(n*sizeof(int));
    ptr2=(int *)calloc(n,sizeof(int));

    if(ptr1 == NULL || ptr2 == NULL)
    {
        printf("Yeterli hafiza ayrilamadi..!");
    }
    else
    {
        printf("MALLOC kullanarak basarili bir sekilde ayirma islemi yapildi..!\n");
        free(ptr1);
        printf("MALLOC icin ayrilan yer serbest birakildi..!\n");

        printf("CALLOC kullanarak basarili bir sekilde ayirma islemi yapildi..!\n");
        free(ptr2);
        printf("CALLOC icin ayrilan yer serbest birakildi..!\n");
    }










    return 0;
}
