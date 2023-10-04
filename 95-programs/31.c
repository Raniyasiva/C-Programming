//Get  10 numbers from the user and arrange in descending order using array:

#include <stdio.h>
int main()
{
  int a[10];
  int i,j,temp;
printf("Enter the elements : ");
for(i=0;i<10;i++)
 scanf("%d",&a[i]);

 printf("DEscending order:\n");
  for(i=0;i<10-1;i++)
 {
  for(j=i+1;j<10;j++)
  {
   if(a[i]<a[j])
   {
   temp=a[i];
   a[i]=a[j];
   a[j]=temp;
   }	
  }
}
 for(i=0;i<10;i++)
  {
   printf("%d\n",a[i]);
   }
  return 0;
}

/*
nter the elements : 9 5 7 1 2 0 8 4 2 1 11
Descending order:
9
8
7
5
4
2
2
1
1
0
*/