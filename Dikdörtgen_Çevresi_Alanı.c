#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void)
{     int x ;
      int y ;
      int alan;
      int cevre ;
      printf("\nLutfen Kisa Kenari giriniz...");
      scanf("%d",&x);
      printf("\nLutfen Uzun Kenari giriniz...");
      scanf("%d",&y);

                    if(x<y)
                {
                alan = x*y ;
                cevre = 2*x +2*y;
                printf("Alan = %d , Cevre = %d",alan,cevre);
                }

                        else
                    {
                        printf("Uyari!! tekrar deneyiniz");
                    }
return 0 ;
}
