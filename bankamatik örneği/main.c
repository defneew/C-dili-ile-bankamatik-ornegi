#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
   int i,secim,para=500,miktar,eskiBakiye,secim2,j;
   for(int i=0;i<2;i++)
   {
       printf("1-Bakiye Goruntule\n2-Para Yatir\n3-Para Cek\n4-Fatura Ode\nSeciminiz:"); scanf("%d",&secim);
       switch(secim){
        case 1:
            printf("Bakiyeniz:%d TL \n\n",para);
            i=0;
        break;
        case 2:
            printf("Miktar giriniz:"); scanf("%d",&miktar);
            eskiBakiye=para;
            para=para+miktar;
            printf("Eski bakiyeniz: %d TL\n",eskiBakiye);
            printf("Yatirmak istediginiz tutar: %d TL\n",miktar);
            printf("Guncel bakiyeniz: %d TL\n",para);
            i=0;
        break;
        case 3:
            printf("Miktar giriniz:"); scanf("%d",&miktar);
            eskiBakiye=para;
            para=para-miktar;
            printf("Eski bakiyeniz: %d TL\n",eskiBakiye);
            printf("Cekmek istediginiz tutar: %d TL\n",miktar);
            printf("Guncel bakiyeniz: %d TL\n",para);
            i=0;
        break;
        case 4:
            for(j=0;j<2;j++){
                printf("1-Internet Faturasi\n2-Elektrik Faturasi\n3-Su Faturasi\n4-Geri don\n");
                printf("Odemek istediginiz fatura: "); scanf("%d",&secim2);
                switch(secim2)
                {
                case 1:
                    para=para-200;
                    printf("Faturaniz odendi.\nGuncel bakiyeniz:%d\n",para);
                    j=0;
                break;
                case 2:
                    para=para-300;
                    printf("Faturanız odendi.\nGuncel bakiyeniz:%d\n",para);
                    j=0;
                break;
                case 3:
                    para=para-250;
                     printf("Faturanız odendi.\nGuncel bakiyeniz:%d\n",para);
                    j=0;
                break;
                case 4: j=5;
                break;
                default:
                    printf("Yanlis giris yaptiniz...\n");
                    j=0;
                break;


                }

            }
            i=0;
            break;
            default:
                printf("\n\n----------------------------\n\n");
                printf("Yanlis secim yaptiniz\n\n");
                printf("\n\n----------------------------\n\n");
                i=0;
            break;




       }
   }

}
