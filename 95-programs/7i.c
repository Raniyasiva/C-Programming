/* 0 0 0
   1 2 3
   3 6 9 
   4 8 12 */

#include <stdio.h>
int main()
{
  int i;
  for(i=0;i<5;i++)
  {
   if(i!=2)
   printf("%d %d %d\n",i,i*2,i*3);
  }
  return 0;
}