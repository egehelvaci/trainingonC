#include <stdio.h>
#include <stdlib.h>

int main()
{
     int i,j,x;
     printf("X :");
     scanf("%d",&x);

for(i=1;i<=x;i++)
{

   for(j=x;j>=i;j--)
        printf("*");

        printf("\n");

}

    return 0;
}
