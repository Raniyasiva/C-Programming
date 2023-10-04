//To accept two integers and check whether they are equal or not
#include<stdio.h>
int main()
{
int a,b;
printf("Enter two numbers:  ");
scanf("%d %d",&a,&b);
if(a==b)
printf("The given numbers are equal");
else
printf("The given numbers are not equal");
return 0;
}
/*
Enter two numbers:  2 2 
The given numbers are equal

Enter two numbers:  3 5
The given numbers are not equal
*/