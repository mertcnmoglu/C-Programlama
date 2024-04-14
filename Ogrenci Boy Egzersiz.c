#include <stdio.h>
#include <stdlib.h>
#define tam 150
int main()
{
    int no,boy,fark,minboy,minno;
    printf("Ogrenci no : ");
    scanf("%d",&no);
    printf("Ogrenci boy : ");
    scanf("%d",&boy);
    minno=no;
    fark=abs(boy-tam);

    while(no>0)
    {
        printf("\nOgrenci no : ");
        scanf("%d",&no);
        printf("\nOgrenci boy : ");
        scanf("%d",&boy);

        if(abs(boy-tam)<fark)
        {
            fark=abs(boy-tam);
            minno=no;
            minboy=boy;
        }
    }
    printf("%d numarali ogrenci %d cm boyuyla %d ye en yakindir.",minno,minboy,tam);


    return 0;
}
