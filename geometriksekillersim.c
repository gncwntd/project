#include <stdio.h>
#define PI 3.14
int main()
{
    float x,y,z,k,l,m;
    int sayi;
    float q1,q2,q3,q4,w1,w2,w3,w4;

    printf("GEOMETRIK SEKILLERI TANIMA SIMULASYONU\n1.UCGEN\n2.DORTGEN\n3.COKGEN\n4.DAIRE\n");
    printf("LUTFEN ISLEM NUMARASI GIRINIZ:%d",sayi);
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

        printf("aci1:\n",k);
        scanf("%f",&k);

        printf("aci2:\n",l);
        scanf("%f",&l);


        printf("aci3:\n",m);
        scanf("%f",&m);

        if( fabsf(x - y) < z <= x + y && fabsf(x - z) < y <= x + z && fabsf(y - z) < x <= y + z)
        {
            if((x == y) && (y ==z) && (x==z)){
                printf("Eskenar Ucgen"); }
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
        printf("LUTFEN KENAR VE ACILARI GIRINIZ: ");


return 0;
}
