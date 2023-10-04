//Cummulative
#include<stdio.h>
int main()
{
 int a[10],cum[10],i;
 int sum=0;
 printf("Enter the elements:  \n");
 for(i=0;i<10;i++)
  {
   scanf("%d",&a[i]);
   }
for(i=0;i<10;i++)
{
  sum=sum+a[i];
  cum[i]=sum;
}
printf("Cummulative series: \n");
for(i=0;i<10;i++)
{
 printf("%d ", cum[i]);
}
return 0;
}
/*
Enter the elements:  
1 2 3 4 5 6 7 8 9 10
Cummulative series:        
1 3 6 10 15 21 28 36 45 55 
*/