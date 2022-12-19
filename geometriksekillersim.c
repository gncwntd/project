#include <stdio.h>
#include <math.h>
#define PI 3.14
//   (((x+y+z)/2)*(((x+y+z)/2)-x)*(((x+y+z)/2)-y)*(((x+y+z)/2)-z))*

int main()
{
    float x,y,z,k,l,m;
    int sayi;
    float q1,q2,q3,q4,w1,w2,w3,w4,r;

    printf("\nGEOMETRIK SEKILLERI TANIMA SIMULASYONU\n\n1.UCGEN\n2.DORTGEN\n3.COKGEN\n4.DAIRE\n5.CIKIS\n\n");
    printf("LUTFEN ISLEM NUMARASI GIRINIZ:");
    scanf("%d",&sayi);

    if(sayi==1)
    {
        printf("LUTFEN KENAR VE ACILARI GIRINIZ:\n");

        printf("Birinci Kenar:\n",x);
        scanf("%f",&x);

        printf("ikinci kenar:\n",y);
        scanf("%f",&y);

        printf("ucuncu kenar:\n",z);
        scanf("%f",&z);

        printf("1.Aci:\n",k);
        scanf("%f",&k);

        printf("2.Aci:\n",l);
        scanf("%f",&l);

        printf("3.Aci:\n",m);
        scanf("%f",&m);

        if( fabsf(x - y) < z <= x + y && fabsf(x - z) < y <= x + z && fabsf(y - z) < x <= y + z)
        {
            if((x == y) && (y ==z) && (x==z)){
                printf("Eskenar Ucgen");}
                //printf("Alanı:%f",);
            if(((x == y)&& (x!= z) && (y!=z)) || ((x == z) && (x!= y) && (z!=y)) || ((y == z) && (y!= x) && (z!=x))){
                if((k==90 & l==m) || (m==90 & k==l) || (l==90 & k==m))
                    printf(" ıkızkenar dık ucgen");}
                else
                    printf("ıkızkenar ucgen");
            if((x != y) && (x!= z) && (y!=z)){
                printf("Cesitkenar Ucgen");}

        }
        else
        {
            printf("Ucgen Belirtmez.");
        }
    }
    else if(sayi==2)
    {
        printf("LUTFEN KENAR VE ACILARI GIRINIZ:\n ");

        printf("Birinci Kenar:\n");
        scanf("%f",&q1);

        printf("Ikinci Kenar:\n");
        scanf("%f",&q2);

        printf("Ucuncu Kenar:\n");
        scanf("%f",&q3);

        printf("Dorduncu Kenar:\n");
        scanf("%f",&q4);

        printf("1.Acı:\n");
        scanf("%f",&w1);

        printf("2.Aci:\n");
        scanf("%f",&w2);

        printf("3.Aci:\n");
        scanf("%f",&w3);

        printf("4.Aci:\n");
        scanf("%f",&w4);

        if ((q1 == q2 == q3 == q4) & ((w1 == w3) & (w2 == w4) & ((w1!= w4)&(w2!=w3)))) {
            printf("Sekliniz Eskenar Dortgen!\n");
            printf("Alani:%f",((q1*q2*sin(w1))/2)+((q3*q4*sin(w3))/2));}

        else if ((q1 == q2 == q3 == q4) & (w1==90&w2==90&w3==90&w4==90)) {
            printf("Sekliniz Kare!");
            printf("Alani:%f",q1*q2);}

        else if (((w1 == w3) & (w2 == w4))) {
            printf("Sekliniz Paralel Kenar!");
            printf("Alani:%f",((q1*q2*sin(w1))/2)+((q3*q4*sin(w3))/2));}

        else{
            printf("Sekliniz Cesitkenar Dortgen!");
            printf("Alani:%f",((q1*q2*sin(w1))/2)+((q3*q4*sin(w3))/2));}
    }

    else if(sayi==3)  //COKGEN
    {
        printf("LUTFEN KENAR VE ACILARI GIRINIZ:\n ");
    }

    else if(sayi==4)
    {
        printf("Lutfen Yaricapi Giriniz:");
        scanf("%f",&r);
        printf("Dairenin Alan:%.2f",2*PI*r);
    }

    else if(sayi==5)
        printf("Yine Bekleriz!");





return 0;
}

