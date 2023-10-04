//Find the biggest number in 3 variables

#include<stdio.h>
void main()
{
    int a,b,c;

    printf("The value of a is ");
    scanf("%d",&a);
    printf("The value of b is ");
    scanf("%d",&b);
    printf("The value of c is ");
    scanf("%d",&c);

     if((a>b) && (a>c))
     printf("a is the biggest number");
     else if((b>a) && (b>c))
     printf("b is the biggest number");
     else
     printf("c is the biggest");
}

/*The value of a is 4
 The value of b is 6
 The value of c is 7
 c is the biggest */