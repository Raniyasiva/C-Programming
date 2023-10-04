/*
0  0  0  0  0  
1  1  1  1  1
0  0  0  0  0
1  1  1  1  1
0  0  0  0  0
*/

#include<stdio.h>
int call(int i);
void main()
{
 int i;
 for(i=0;i<5;i++)
 
 {
   if(i%2==0 )
   call(0);
   else 
   call(1);
   printf("\n");
 }

}
int call(int i)
{
  int j;
  for(j=0;j<5;j++)
  printf("%d ",i);
}

      
      
     
     
    
    
