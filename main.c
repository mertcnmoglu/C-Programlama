#include <stdio.h>
#include <stdlib.h>


void dortislem(float sayi1,float sayi2,char islem,float *sonucum)
{
    switch(islem)
    {
        case '+' :
        {
            *sonucum=sayi1+sayi2;
            break;
        }
        case '-' :
        {
            *sonucum=sayi1-sayi2;
            break;
        }
        case '*' :
        {
            *sonucum=sayi1*sayi2;
            break;
        }
        case '/' :
        {
            *sonucum=sayi1/sayi2;
            break;
        }
    }
}

int main()
{
    float sayi1,sayi2,sonuc;
    char op;
    printf("Hangi islem yapilsin(+ - * /)\n");
    scanf("%c",&op);
    printf("2 adet sayi giriniz\n");
    scanf("%f%f",&sayi1,&sayi2);
    dortislem(sayi1,sayi2,op,&sonuc);
    printf("Ilk sayimiz %.2f, Ikinci sayimiz %.2f, Islemimiz %c, Sonucumuz %.2f",sayi1,sayi2,op,sonuc);
    return 0;
}
