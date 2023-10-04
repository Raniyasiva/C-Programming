//Write a program in C to merge two arrays of same sorted in descending order:

#include<stdio.h>

void main()
{
 int s_1,s_2,s_3;
 int i,j,k;
 int arr_1[10],arr_2[10],arr_3[20];
 printf("Enter the size of first array: ");
 scanf("%d",&s_1);
 printf("Enter the size of second array: ");
 scanf("%d",&s_2);
 printf("Merge arrays size is %d\n",s_1+s_2);

 printf("Enter the elements in first array: ");
 for(i=0;i<s_1;i++)
 scanf("%d",&arr_1[i]);
      
 printf("Enter the elements in first array: ");
 for(i=0;i<s_2;i++)
 scanf("%d",&arr_2[i]);
 for(i=0;i<s_3;i++)
{
 arr_3[i]=arr_1[i];
 arr_3[i]=arr_2[i];
}

 printf("The merged array before sorting: ");
 for(i=0;i<s_3;i++)
 printf("%d ",arr_3[i]);
 
}



