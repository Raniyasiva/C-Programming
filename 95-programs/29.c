//Find the maximum and minimum element in an array:

#include <stdio.h>
int main()
{
  int a[5]={22,4,5,28,3};
  int i,small,big;
  small=a[0];
  big=a[0];
 for(i=0;i<5;i++)
 {
  if(small>a[i])
    small=a[i];
 }
 printf("Smallest number is  %d\n",small); 

for(i=0;i<5;i++)
 {
  if(big<a[i])
    big=a[i];
 }
 printf("Biggest number is  %d",big); 
}
/*Smallest number is  3
Biggest number is  28*/