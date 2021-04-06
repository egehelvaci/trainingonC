#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1,n,fact=1;
    printf("sayý giriniz");
    scanf("%d",&n);
        while(i<=n)
        {
            fact*=i;
            i++;
        }
        printf("fact %d",fact);
    return 0;
}
