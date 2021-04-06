#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi1,bas1,bas2,bas4,bas5 ;
    printf("Lutfen 5 haneli bir sayi giriniz...");
    scanf("%d",&sayi1);
    /*printf("%d\n",sayi1);
    printf("%d\t",(sayi1/10000));
    printf("%d\t",(sayi1/1000)%10);
    printf("%d\t",(sayi1/100)%10);
    printf("%d\t",(sayi1/10)%10);
    printf("%d\t",sayi1%10);*/
    bas1=sayi1%10;
    bas2=(sayi1/10)%10;
    bas4=(sayi1/1000)%10;
    bas5=(sayi1/10000);
    if(bas1==bas5 && bas2==bas4)
        printf("Bu sayi polindrome'dir");
    else
        printf("bu sayi ondan degil");

    return 0;
}
