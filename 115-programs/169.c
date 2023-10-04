#include<stdio.h> 
void main() 
{ 
int a,b,*x,*y,sum; 
printf("The value of a is "); 
scanf("%d",&a); 
printf("The value of b is "); 
scanf("%d",&b); 
x=&a; 
y=&b; 
sum= (*x) + (*y); 
printf("The sum is %d",sum); 
} 
