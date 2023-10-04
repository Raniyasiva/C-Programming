//Write a program in c to check whether a number is a even or odd using the function

#include<stdio.h>
void check(int num);
int main()
{
 int num;
 printf("Enter a number: ");
 scanf("%d",&num);
check(num);
return 0;
}
void check(int num)
{
if(num%2==0)
 printf("%d is even\n",num);
else
 printf("%d is odd\n",num);
}

/*
Enter a number: 44
44 is even
Enter a number: 31
31 is odd
*/