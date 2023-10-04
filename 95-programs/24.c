//Find the positive numbers and even numbers and odd numbers seperately in the given set of 10 numbers:

#include<stdio.h>
void main()
{
 int i,a[10]={1,2,-3,-4,5,6,7,8,9,10};
 
printf("The positive numbers are ");
 for(i=0;i<10;i++)
   {
    if(i>0)
    printf("%d ",i);
   }
printf("\nThe Even numbers are ");
 for(i=0;i<10;i++)
   {
    if(i%2==0)
    printf("%d ",i);
   }
printf("\nThe odd numbers are ");
 for(i=0;i<10;i++)
   {
    if(i%2!=0)
    printf("%d ",i);
   }
}

/*The positive numbers are 1 2 3 4 5 6 7 8 9 
 The Even numbers are 0 2 4 6 8
 The odd numbers are 1 3 5 7 9*/