#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cekilecekTutar;
    int YatirilacakTutar;
    int secim;
    int bakiye = 2000;

    while(secim)
    {
        printf("1-Bakiye Miktari\n");
        printf("2-Para Cek\n");
        printf("3-Para Yatir\n");
        printf("0-Cikis\n");
        printf("Lutfen yapmak istediginiz islemi giriniz : ");
        scanf("%d",&secim);
        switch(secim)
        {
        case 0:
            break;
        case 1:
            printf("Bakiyem : %d\n",bakiye);
            break;
        case 2:
            printf("Lutfen cekmek istediginiz para miktarini giriniz : ");
            scanf("%d",&cekilecekTutar);
            bakiye=bakiye-cekilecekTutar;
            printf("Bakiyem : %d\n",bakiye);
            break;
        case 3:
            printf("Yatirmak istediginiz para miktarini giriniz : ");
            scanf("%d",&YatirilacakTutar);
            bakiye=bakiye+YatirilacakTutar;
            printf("Bakiyem : %d\n",bakiye);
            break;
        if(cekilecekTutar>bakiye)
        {
            printf("Bakiyenizden yuksek miktar girdiniz !\n");
        }
        else
        {
            printf("Cekme islemi basarili.");
            bakiye=bakiye-cekilecekTutar;
            printf("Bakiyem : %d\n",bakiye);
        }
        default:
        printf("Yanlis tuslama yaptiniz.");
        }
    }










    return 0;
}
