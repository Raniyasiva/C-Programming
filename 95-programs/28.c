//Find the biggest numbers amoung 10 numbers


#include <stdio.h>
int main()
{
  int a[5]={22,4,5,28,3};
  int i,big;
  big=a[0];
  
 for(i=0;i<5;i++)
 {
  if(big<a[i])
    big=a[i];
 }
 printf("biggest number is  %d",big); 
}
//biggest number is  28