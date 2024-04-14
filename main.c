#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b;
    char islem;
    printf("Hangi islem yapilsin (+ - * /) : ");
    scanf("%c",&islem);
    printf("2 adet sayi giriniz : ");
    scanf("%f %f",&a,&b);

    if(islem == '+')
    {
        printf("Islem sonucu : %f + %f = %.2f",a,b,a+b);
    }
    else if(islem == '-')
    {
        printf("Islem sonucu : %f - %f = %.2f",a,b,a-b);
    }
    else if(islem == '*')
    {
        printf("Islem sonucu : %f * %f = %.2f",a,b,a*b);
    }
    else if(islem == '/')
    {
        printf("Islem sonucu : %f / %f = %.2f",a,b,a/b);
    }
    else
    {
        printf("Error!");
    }
    return 0;
}
