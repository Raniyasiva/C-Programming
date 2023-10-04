//To calculate the root of quadratic equation

#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c,x1,x2;
    printf("Coeffiecient value of  a,b,c ");
    scanf("%d %d %d",&a,&b,&c);

    x1 = (b+(sqrt(pow(b,2))-4*a*c))/2*a;
    x2 = (b-(sqrt(pow(b,2))-4*a*c))/2*a;

    printf("%d %d",x1,x2);
    return 0;
}                  

                            