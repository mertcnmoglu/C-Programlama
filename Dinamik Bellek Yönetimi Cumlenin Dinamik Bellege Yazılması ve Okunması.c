#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *cumle;

    cumle = (char *)malloc(100*sizeof(cumle));

    printf("Cumle giriniz : ");
    gets(cumle);

    printf("Girdiginiz Cumle :\n%s",cumle);


    return 0;
}
