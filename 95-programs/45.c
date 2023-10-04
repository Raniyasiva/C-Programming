//Average using function

#include <stdio.h>
int avg(int x);
int main()
{
  int i,sum=0;
  int mark[5];
  printf("Enter the marks: \n");
  for(i=0;i<5;i++)
  {
   scanf("%d",&mark[i]); 
   }
   
   for(i=0;i<5;i++)
   sum=sum+mark[i];
   printf("Total =%d\n",sum);
   printf("Average mark is %d \n",avg(sum));
 }
 int avg(int x)
   {
     int temp;
     temp =x/5;
     return temp;
   }
   /*
Enter the marks: 
99
84
91
78
82
Total =434
Average mark is 86 
*/