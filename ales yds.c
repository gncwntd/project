#include <stdio.h>
#include <stdlib.h>

int main()
{

    float yds;
    float ales;
    float m_o;


    printf("Ales puani:\n");
    scanf("%f",&ales);
    printf("Yds puani:\n");
    scanf("%f",&yds);
    printf("Mezuniyet ortalamasi:\n");
    scanf("%f",&m_o);

    float puan=ales/2+yds/4+m_o/4;
    printf("Puaniniz:%f\n",puan);

    if(puan<60)
    {
        printf("Puaniniz yetersiz!\nELENDINIZ!");
    }
    else if(yds<70)
    {
        printf("Yds Puaniniz Yetersiz!\nELENDINIZ!");
    }
    else
    {
        printf("GECTINIZ!");
    }



    return 0;



}
