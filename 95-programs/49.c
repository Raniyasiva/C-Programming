/*
0  0  0  0  0  
1  1  1  1  1
0  0  0  0  0
1  1  1  1  1
0  0  0  0  0
2  2  2  2  2
*/

#include<stdio.h>
int call(int i);
void main()
{
 int i;
 for(i=0;i<6;i++)
 
 {
   if(i%2==0 )
   call(0);
   else if(i==5)
   call(2);
   else 
   call(1);
   printf("\n");
 }

}
int call(int i)
{
  int j;
  for(j=0;j<6;j++)
  printf("%d ",i);
}
