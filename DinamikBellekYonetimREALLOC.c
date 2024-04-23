#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;

    int n = 5;
    int i;
    printf("Girdigim sayinin degeri %d\n",n);

    ptr=(int *)calloc(n,sizeof(int));

    if(ptr == NULL)
    {
        printf("Yeterli hafiza ayrilamadi..!");
        exit(0);
    }
    else
    {
        for(i=0; i<n; i++)
        {
            ptr[i]=i+1;
        }
        printf("Elemanlarim\n");
        for(i=0; i<n; i++)
        {
            printf("%d, ",ptr[i]);
        }
        n=10;

        printf("\nGirdigimiz sayi degeri %d\n",n);
        ptr=realloc(ptr,n*sizeof(int));

        printf("Data bellek basari bir sekilde tekrar ayrildi..!\n");

        for(i=5;i<n;i++)
        {
            ptr[i]=i+1;
        }
        printf("Elemanlarim\n");
        for(i=0;i<n;i++)
        {
            printf("%d, ",ptr[i]);
        }
        free(ptr);
    }

    return 0;
}
