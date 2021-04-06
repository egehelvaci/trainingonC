#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int bas1;
    int bas2;
    int bas3;
    int bas4;
    printf("Lutfen  4 basamakli bir sayi giriniz\n");
    scanf("%d",&x);



    bas1= x/1000;
    bas2=(x%1000)/100;
    bas3=((x%1000)%100)/10;
    bas4=((x%1000)%100)%10;
    printf("%d\t%d\t%d\t%d",bas4,bas3,bas2,bas1);




    return 0;
}
