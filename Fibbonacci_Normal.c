#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int alan(int);
int main()
{
    int a;
    printf("Enter a number ");
    scanf("%d",&a);

    printf("%d",alan(a));
return 0;
}
int alan(int a)
{

    return (alan(pow(a,2)));
}
