#include <stdio.h>
#include <stdlib.h>

int main()
{   int i,sayi;
    int top=0;
    printf("Lutfen Sayi Giriniz...:");
    scanf("%d",&sayi);

    for(i=1;i<sayi;i++)
        {
        if(sayi%i==0)
        top+=i;
        }
      if(sayi==top)
            printf("%d mukemmel sayidir.",sayi);
      else
        printf("%d mukemmel sayi degildir.",sayi);

    return 0;
}
