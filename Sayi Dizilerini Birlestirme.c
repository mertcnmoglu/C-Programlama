#include <stdio.h>
#include <stdlib.h>

int main()
{

   int mert[100],isa[100];
   int *sayi1;
   int *sayi2;
   int n,k,i;

   printf("Ilk dizimizin eleman sayisi (max 50) : ");
   scanf("%d",&n);

   for(sayi1=mert;sayi1<mert+n;sayi1++)
   {
       printf("Eleman %d : ",sayi1-mert);
       scanf("%d",sayi1);
   }

   printf("Ikinci dizimizin eleman sayisi (max 50) : ");
   scanf("%d",&k);

   for(sayi2=isa;sayi2<isa+k;sayi2++)
   {
       printf("Eleman %d : ",sayi2-isa);
       scanf("%d",sayi2);
   }
   printf("Ilk dizimiz : \n");

   for(i=0;i<n;i++)
   {
       printf("%3d",*(mert+i)); //diğer bastırım şekli mert[i] dir.
   }
   printf("\nIkinci dizimiz : \n");

   for(i=0;i<k;i++)
   {
       printf("%3d",*(isa+i));//Diğer bastırım şekli isa[i] dir.
   }
   printf("\n");

   for(sayi1=mert+n,sayi2=isa;sayi2<isa+k;sayi1++,sayi2++)
   {
       *sayi1=*sayi2;
   }
   printf("Birlestirmeden sonra :\n");

   for(i=0;i<n+k;i++)
   {
       printf("%3d",*(mert+i));
   }

    return 0;
}
