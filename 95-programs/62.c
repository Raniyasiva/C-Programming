//Delete duplicate element in an array:

#include<stdio.h>
void main()
{
 int i,j,k,n,a[5],temp,flag=0;
 printf("Enter the size of an array: ");
 scanf("%d",&n);

 printf("Enter the elements: ");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 printf("removing the duplicate elements : ");
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
//n--;
flag=0;
}
 for(i=0;i<n;i++)
 if(a[i])
   printf("%d ",a[i]);
}
/*
Enter the size of an array: 5
Enter the elements: 1 1 2 2 3 
removing the duplicate elements : 1 2 3 
*/