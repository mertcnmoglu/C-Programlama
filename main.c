#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*int mert = 10;
    int *p;

    p=&mert;

    printf("%d\n",*p);
    printf("%d\n",&p);
    printf("%d\n",mert);
    printf("%d\n",&mert);*/

    int *mert;
    int n;
    n=20;

    mert=&n;

    printf("%d\n",n);
    printf("%d\n",&n);
    printf("%d\n",*mert);
    printf("%d\n",&mert);

    *mert=30;
    printf("%d\n",n);











    return 0;
}
