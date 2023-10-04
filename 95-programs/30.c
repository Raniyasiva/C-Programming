//Get  10 numbers from the user and arrange in ascending order using array:

#include <stdio.h>
int main()
{
  int a[10];
  int i,j,temp;
printf("Enter the elements : ");
for(i=0;i<10;i++)
 scanf("%d",&a[i]);

 printf("Ascending order:\n");
  for(i=0;i<10-1;i++)
 {
  for(j=i+1;j<10;j++)
  {
   if(a[i]>a[j])
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
Enter the elements : 9 8 6 1 2 5 6 0 12 4 3 7
Ascending order:
0
1
2
4
5
6
6
8
9
12

*/

