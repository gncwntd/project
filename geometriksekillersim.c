#include <stdio.h>
#include <math.h>
#define PI 3.14159265
//   (((x+y+z)/2)*(((x+y+z)/2)-x)*(((x+y+z)/2)-y)*(((x+y+z)/2)-z))*
void kenarsayisi()
{
    int a;
    printf("Lutfen Kenarlari Giriniz:\n(Bitirmek icin '-1' e basiniz)\n");
    scanf("%d",&a);
    printf("1. kenar %d\n",a);
    int i=2;
    int ct = 0;
    while(a != -1)
    {
        scanf("%d",&a);
        printf("%d . kenar %d\n",i,a);
        i++;
        ct++;
    }
    printf("Sekliniz %d'gendir!\n\n",ct);
    printf("Ana sayfaya yonlendiriliyorsunuz...\n\n");
}

int main()
{
    float x,y,z,k,l,m;
    int sayi;
    float q1,q2,q3,q4,w1,w2,w3,w4,r;
    float ucgen_alani;

    printf("\nGEOMETRIK SEKILLERI TANIMA SIMULASYONU\n\n1.UCGEN\n2.DORTGEN\n3.COKGEN\n4.DAIRE\n5.CIKIS\n\n");
    while(1) {
        printf("LUTFEN ISLEM NUMARASI GIRINIZ:\n");
        scanf("%d",&sayi);


         if (sayi == 1) {
            printf("LUTFEN KENAR VE ACILARI GIRINIZ:\n");
            
            printf("Birinci Kenar:\n");
            scanf("%f", &x);
              
            while(x<=0){  
            printf ("Kenar degeri 0 veya 0'dan kucuk olamaz. Lutfen gecerli bir deger giriniz\n");
            scanf("%f", &x);
            }
            
           
            printf("Ikinci kenar:\n");
            scanf("%f", &y);
            while(y<=0){
            printf ("Kenar degeri 0 veya 0'dan kucuk olamaz. Lutfen gecerli bir deger giriniz\n");
            scanf("%f", &y);
            }
            
            printf("Ucuncu kenar:\n");
            scanf("%f", &z);
            while(z<=0){
            printf ("Kenar degeri 0 veya 0'dan kucuk olamaz. Lutfen gecerli bir deger giriniz\n");
            scanf("%f", &z);
            } 
            while (x>z+y || y>x+z || z>x+y || x<fabsf(y-z)  || y<fabsf(x-z) || z<fabsf(x-y) ){
            printf ("Girilen degerler ucgen esitsizligine uymadigi icin bir ucgen olusturmaz. Tekrar deneyiniz.\n");
            printf("Birinci Kenar:\n");
            scanf("%f", &x);
              
            while(x<=0){  
            printf ("Kenar degeri 0 veya 0'dan kucuk olamaz. Lutfen gecerli bir deger giriniz\n");
            scanf("%f", &x);
            }
            
           
            printf("Ikinci kenar:\n");
            scanf("%f", &y);
            while(y<=0){
            printf ("Kenar degeri 0 veya 0'dan kucuk olamaz. Lutfen gecerli bir deger giriniz\n");
            scanf("%f", &y);
            }
            
            printf("Ucuncu kenar:\n");
            scanf("%f", &z);
            while(z<=0){
            printf ("Kenar degeri 0 veya 0'dan kucuk olamaz. Lutfen gecerli bir deger giriniz\n");
            scanf("%f", &z);
            } 
            }
            k=acos ((x*x+y*y-z*z)/(2*x*y))*180/PI;
            
            m= acos((x*x+z*z-y*y)/(2*x*z))*180/PI;
            l=180-(k+m);
            
           printf("1. ve 2.kenar arasindaki aci:%f\n2. ve 3.kenar arsindaki aci:%f\n3. ve 1.kenar arasindaki aci:%f\n",k,l,m);
            ucgen_alani= 0.5*x*y*sin(k* PI/180);
            printf("Ucgenin alani:%f\n",ucgen_alani);
           
        

            
                
                if ((x != y) && (x != z) && (y != z)) {
                    printf("Bu ucgen bir cesitkenar ucgendir\n");
                }

                else if ((x == y) && (y == z) && (x == z)) {
                    printf("Bu ucgen bir eskenar ucgendir\n");
                }
                //printf("Alanı:%f",);
                else if (((x == y) && (x != z) && (y != z)) || ((x == z) && (x != y) && (z != y)) ||
                    ((y == z) && (y != x) && (z != x))) {
                    printf("Bu ucgen bir ıkızkenar ucgendir\n");
                } 
                if(x*x+y*y==z*z||x*x+z*z==y*y||y*y+z*z==x*x)
         printf("Bu ucgen ayni zamanda bir dik ucgendir.\n");
                
             
            
        } 
        else if (sayi == 2) {
            printf("LUTFEN KENAR VE ACILARI GIRINIZ:\n ");

            printf("Birinci Kenar:\n");
            scanf("%f", &q1);

            printf("Ikinci Kenar:\n");
            scanf("%f", &q2);

            printf("Ucuncu Kenar:\n");
            scanf("%f", &q3);

            printf("Dorduncu Kenar:\n");
            scanf("%f", &q4);

            printf("1.Aci:\n");
            scanf("%f", &w1);

            printf("2.Aci:\n");
            scanf("%f", &w2);

            printf("3.Aci:\n");
            scanf("%f", &w3);

            printf("4.Aci:\n");
            scanf("%f", &w4);

            if ((q1 == q2 == q3 == q4) & ((w1 == w3) & (w2 == w4) & ((w1 != w4) & (w2 != w3)))) {
                printf("Sekliniz Eskenar Dortgen!\n");
                printf("Alani:%f\n\n", ((q1 * q2 * sin(w1)) / 2) + ((q3 * q4 * sin(w3)) / 2));
                printf("Ana sayfaya yonlendiriliyorsunuz...\n\n");
            } else if (((q1 != q2) & (q3 != q4)) & ((q1 == q3) & (q2 == q4)) &
                       (w1 == 90 & w2 == 90 & w3 == 90 & w4 == 90)) {
                printf("Sekliniz Dikdortgen!\n");
                printf("Alani:%f\n\n", q1 * q2);
                printf("Ana sayfaya yonlendiriliyorsunuz...\n\n");
            } else if ((q1 == q2 == q3 == q4) & (w1 == 90 & w2 == 90 & w3 == 90 & w4 == 90)) {
                printf("Sekliniz Kare!\n");
                printf("Alani:%f\n\n", q1 * q2);
                printf("Ana sayfaya yonlendiriliyorsunuz...\n\n");
            } else if ((q1 != q2 != q3 != q4) & ((w1 == w3) & (w2 == w4))) {
                printf("Sekliniz Paralel Kenar!\n");
                printf("Alani:%f\n\n", ((q1 * q2 * sin(w1)) / 2) + ((q3 * q4 * sin(w3)) / 2));
                printf("Ana sayfaya yonlendiriliyorsunuz...\n\n");
            } else {
                printf("Sekliniz Cesitkenar Dortgen!\n");
                printf("Alani:%f\n\n", ((q1 * q2 * sin(w1)) / 2) + ((q3 * q4 * sin(w3)) / 2));
                printf("Ana sayfaya yonlendiriliyorsunuz...\n\n");
            }
        } else if (sayi == 3) {
            kenarsayisi();
        } else if (sayi == 4) {
            printf("Lutfen Yaricapi Giriniz:\n");
            scanf("%f", &r);
            printf("Dairenin Cevresi:%.2f\n", 2 * PI * r);
            printf("Dairenin Alani:%.2f\n\n", PI * r * r);
            printf("Ana sayfaya yonlendiriliyorsunuz...\n\n");

        } else if (sayi == 5){
            printf("Yine Bekleriz!\n");
            break;}

        else
            printf("Gecersiz Islem! Lutfen Tekrar Deneyin.\n");

    }



    return 0;
}


