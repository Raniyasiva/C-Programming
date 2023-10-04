//Matrix addition 3x3 using array: 
#include <stdio.h>
int main()
{
  int a[3][3],b[3][3],add[3][3];
  int i,j;
	
  printf("Entered the values \n");
   {
    for(i=0;i<3;i++)
     {
      for(j=0;j<3;j++) 
      	scanf("%d",&a[i][j]);
	
      }
  }
  for(i=0;i<3;i++)
  {
  for(j=0;j<3;j++)
  scanf("%d",&b[i][j]);
  }
   printf("The first set of matrix\n");		
   for(i=0;i<3;i++)
    {
     for(j=0;j<3;j++)
     {
       printf("%d\t",a[i][j]);
      }
	printf("\n");
     }
    printf("The second set of matrix\n");	
    for(i=0;i<3;i++)
     {
      for(j=0;j<3;j++)
	{
	printf("%d\t",b[i][j]);
	}
	printf("\n");
  }
	printf("The addition of 3X3 matrix is %d\n",add[3][3]);
	  for(i=0;i<3;i++)
	  {
	   for(j=0;j<3;j++)
	    {
	   add[i][j]=a[i][j]+b[i][j];
	     }
    }
	for(i=0;i<3;i++)
	{
	  for(j=0;j<3;j++)
	  {
	  printf("%d\t",add[i][j]);
     }
    printf("\n");
  } 
   return 0;
}
/*
Entered the values 
1 2 3 4 7 8 9 5 12 10 3 4 6 8 9 3 4 6
The first set of matrix
1       2       3      
4       7       8
9       5       12
The second set of matrix
10      3       4
6       8       9
3       4       6
The addition of 3X3 matrix is 10
11      5       7
10      15      17
12      9       18
*/