//Swap elements using one array to another array using one temporary space

#include<stdio.h>
void main()
{
  int a[50],b[50],i,j,temp;

  printf("Enter 10 elements for array 1 : ");
  for(i=0;i<10;i++)
  scanf("%d",&a[i]);
  printf("Enter 10 elements for array 2: ");
  for(j=0;j<10;j++)
  scanf("%d", &b[j]);

printf("\nThe first set of an array \n");
for(i=0;i<10;i++)
printf("%d ",a[i]);

printf("\nThe second set of an array\n");
for(j=0;j<10;j++)
printf("%d ",b[j]);

printf("\nAfter swapping: \n");
for(i=0;i<10;i++)
 {
   {
    temp=a[i];
    a[i]=b[i];
    b[i]=temp;
  }
}
printf("\nElements in first array \n");
for(i=0;i<10;i++)
printf("%d ",a[i]);

printf("\nElements in second array \n");
for(j=0;j<10;j++)
printf("%d ",b[j]);
}
/*
The first set of an array 
1 2 3 4 5 6 7 8 9 10      
The second set of an array     
11 22 33 44 55 66 77 88 99 111 
After swapping: 

Elements in first array        
11 22 33 44 55 66 77 88 99 111 
Elements in second array 
1 2 3 4 5 6 7 8 9 10     
*/

