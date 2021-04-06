#include <stdio.h>
#include <stdlib.h>

int main()
{
     int vize_1 ,vize_2 ,fin ;
     float ort ;

     printf("\n1.Vize =");
     scanf("%d",&vize_1);
     printf("\n2.Vize =");
     scanf("%d",&vize_2);
     printf("\n Final =");
     scanf("%d",&fin);

     ort = ((vize_1*30)/100) + ((vize_2*30)/100) + ((fin*40)/100) ;

        if(ort>=45)
            {
            printf("\n%f ile Gectiniz ...",ort);
            }
        else
            {
            printf("\n%f ile kaldiniz...",ort);
            }

  return 0;
}
