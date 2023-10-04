//Matrix subtraction  3x3 using array

#include <stdio.h>
int main()
{
  int a[3][3],b[3][3],sub[3][3];
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
	printf("The subtraction of 3X3 matrix is %d\n",sub[3][3]);
	  for(i=0;i<3;i++)
	  {
	   for(j=0;j<3;j++)
	    {
	   sub[i][j]=a[i][j]-b[i][j];
	     }
    }
	for(i=0;i<3;i++)
	{
	  for(j=0;j<3;j++)
	  {
	  printf("%d\t",sub[i][j]);
     }
    printf("\n");
  } 
   return 0;
}
/*
Entered the values 
19 18 17 16 15 14 13 12 22 26 29 27 33 1 2 3 4 5 6 7 8 9 0 10 11 14 1 8 7
The first set of matrix
19      18      17
16      15      14
13      12      22
The second set of matrix
26      29      27
33      1       2
3       4       5
The subtraction of 3X3 matrix is 26
-7      -11     -10
-17     14      12
10      8       17

*/