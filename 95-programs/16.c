//Print prime numbers between 2 to 100

#include<stdio.h>
void main()
{
int i,j,count;
printf("The prime numbers are\n");
for(i=2;i<100;i++)
{
count=0;
 for(j=1;j<=i;j++)
  {
    if (i%j==0)  
    count++;
 }
if(count==2)
 printf("%d ",i);

}
}
/*The prime numbers are
2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97 */ 