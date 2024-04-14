#include <stdio.h>
#include <stdlib.h>


float dortislem(float sayi1,float sayi2,char islem)
{
    if(islem == '+')
    {
        return sayi1+sayi2;
    }
    else if(islem == '-')
    {
        return sayi1-sayi2;
    }
    else if(islem == '*')
    {
        return sayi1*sayi2;
    }
    else if(islem == '/')
    {
        return sayi1/sayi2;
    }
    else
    {
        printf("Error!");
    }
}

int main()
{
    char islem;
    float a,b;
    printf("Hangi islem yapilsin (+ - * /) : ");
    scanf("%c",&islem);
    printf("2 adet sayi giriniz : ");
    scanf("%f %f",&a,&b);
    printf("Islem sonucumuz : %.2f",dortislem(a,b,islem));
    return 0;
}
