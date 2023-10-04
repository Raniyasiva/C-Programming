//Write a c programming to find out maximum and minimum of some values using function which will return an array

#include<stdio.h>
int max (int a[10]);
int min (int a[10]);
void main()
{
   int i,a[10]={ 11,2,65,4,8,7,10,14,31,43};

   printf("Maximum value in an array is %d \n",max(a));
   printf("Minimum value in an array is %d ",min(a));
}
int max ( int a[10])
{
   int big,i;
   big=a[0];
for(i=0;i<10;i++)
{
if(big<a[i])
big=a[i];
}
return big;
}

int min ( int a[10])
{
   int small,i;
   small=a[0];
for(i=0;i<10;i++)
{
if(small>a[i])
small=a[i];
}
return small; 
}

/*
Maximum value in an array is 65 
Minimum value in an array is 2  
*/
