//Armstrong

#include<stdio.h>
void main()
{
    int num,t,i,sum=0;
printf("Enter the number: ");
scanf("%d",&num);

    t=num;
    while(t!=0)
    {
    i=t%10;
    sum=sum+i*i*i;
    t=t/10;
    }
if(sum==num)
  printf("%d is an Armstrong number",num);
else 
 printf("%d is not an Armstrong number",num);
}

/*
Enter the number: 371
371 is an Armstrong number
Enter the number: 111
111 is not an Armstrong number
*/