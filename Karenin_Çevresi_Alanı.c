#include <stdio.h>
#include <stdlib.h>
//Karenin Alaný ve Çevresi
int main()
{
    int x ;
    int alan ;
    int cevre ;
    printf("\nBir Kenar Giriniz=");
    scanf("%d",&x);
    alan = x*x ;
    cevre = 4*x ;
    printf("Alan= %d, Cevre = %d",alan ,cevre);

    return 0;
}
