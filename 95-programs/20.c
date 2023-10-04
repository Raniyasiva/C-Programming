//Write the code for select odd and even number seperately from the input 0f 6 numbers from the user:

#include<stdio.h>
void main()
 {
    int a[10],i,b;
    printf("The elements  are ");
    for(i=0;i<6;i++)
    scanf("%d",&a[i]);

    printf("The even numbers are ");
    for(i=0;i<6;i++)
    {
    if(a[i]%2==0)
    printf("%d ",a[i]);
    }
    printf("\nThe odd numbers are ");
    for(i=0;i<6;i++)
    {
    if(a[i]%2!=0)
    printf("%d ",a[i]);
    }
 }

 /* 
 The elements  are 2 4 5 3 1 7
 The even numbers are 2 4    
 The odd numbers are 5 3 1 7
  */





     