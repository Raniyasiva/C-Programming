//Write a program in C to print all unique elements in an array:

#include<stdio.h>
void main()
{
 int i,j,k,n,a[10],temp,flag=0;
 printf("Enter the size of an array: ");
 scanf("%d",&n);

 printf("Enter the elements: ");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 printf("Unique elements in array : ");
for(i=0;i<n;i++)
{
 for(j=i+1;j<n;j++)
 {
  if(a[i]==a[j])
  {
     for(k=j;k<n;k++)
     a[k]=a[k+1];
     flag++; 
  } 
}
if (flag)
n--;
flag=0;
}
 for(i=0;i<n;i++)
 if(a[i])
   printf("%d ",a[i]);
}
/*
Enter the size of an array: 10
Enter the elements: 1 1 2 2 3 3 4 4 5 5 
Unique elements in array : 1 2 3 4 5 
*/