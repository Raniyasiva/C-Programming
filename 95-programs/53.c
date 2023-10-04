//Sorting a[9] in ascending order

#include<stdio.h>
void main()
{
  int i,j,temp,a[9];
  printf("Enter the elements in an array: ");
  for(i=0;i<9;i++)
  scanf("%d ",&a[i]);

  printf("Sorted in ascending order: ");
  for(i=0;i<9;i++)
   {
    for(j=i+1;j<i;j++)
     {
       if(a[i]>a[j])
        {
        temp=a[i];
        a[i]=a[j];
        a[j]=a[i];
        }
     }
   }
    for(i=0;i<9;i++)
      printf("%d ",i);
}
/*
Enter the elements in an array:  7 5 8 4 2 1 0 6 3
Sorted in ascending order: 0 1 2 3 4 5 6 7 8 
*/