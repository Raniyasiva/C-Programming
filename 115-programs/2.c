//To check whether a given number is even or odd

#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    if(num%2==0)
    printf("The given number is even");
    else
    printf("The given number is odd");
    return 0;
}
/*
Enter the number: 88
The given number is even

Enter the number: 7
The given number is odd
*/