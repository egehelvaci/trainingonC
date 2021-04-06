#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1,sayi,max,min;
        printf("sayi:");
        scanf("%d",&sayi);
        max=sayi;
        min=sayi;
    while(i<10)
    {
        printf("sayi:");
        scanf("%d",&sayi);
        i++;

        if(max<sayi)
           max=sayi;
        if(sayi<min)
           min=sayi;


    }
    printf("max:%d",max);
    printf("Min:%d",min);
    return 0;
}
