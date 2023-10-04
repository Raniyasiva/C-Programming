//Add all elements in array 2x2

#include<stdio.h>
void main()
{
 int i,j,sum=0,a[2][2];

 printf("Enter the elements: ");
 for(i=0;i<2;i++)
 {
    for(j=0;j<2;j++)
    scanf("%d",&a[i][j]);
 }
 printf("Entered 2x2 array \n");
 for(i=0;i<2;i++)
 {
    for(j=0;j<2;j++)
    printf("%d ",a[i][j]);
    printf("\n");
 }
 printf(" sum of the elements : ");
 for(i=0;i<2;i++)
 {
    for(j=0;j<2;j++)
    {
        sum=sum+a[i][j];
    }
 }
 printf("%d",sum); 
} 
/*
Enter the elements: 1 2 3 4
Entered 2x2 array        
1 2 
3 4 
 sum of the elements : 10
*/