#include <stdio.h>
#include <stdlib.h>

int fibonacci (int);
int main()
{
        int number,i=1;
                printf("Number:");
                scanf("%d",&number);
            while(i<2){
                    if(0>number)
                    {
                       printf("Number:");
                       scanf("%d",&number);
                    }
                    else
                        break;
            }
            printf("Fibonacci %d = %d",number,fibonacci(number));

    return 0;
}
int fibonacci(int a)
{
    if(a == 0 || a == 1)
    {
        return a;
    }
    else
        return (fibonacci(a-1)+fibonacci(a-2));

}
