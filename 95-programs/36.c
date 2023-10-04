//Create 2x2x2x2 dimensional array get an input from the user and print output 

#include <stdio.h>
int main()
{
int a[2][2][2][2];
int i,j,k,l;
 printf("Enter the elements: \n");
 for(i=0;i<2;i++)
{
  for(j=0;j<2;j++)
   {
    for(k=0;k<2;k++)
      {
	for(l=0;l<2;l++)
	{
	  scanf("%d",&a[i][j][k][l]);
	}
      }
    }
  }
  printf("The entered elements are: \n");
  for(i=0;i<2;i++)
   {
     for(j=0;j<2;j++)
     {
      for(k=0;k<2;k++)
       {
	for(l=0;l<2;l++)
	{
	 printf("%d  ",a[i][j][k][l]);
	}
       }  
      }
      printf("\n");
    }
  return 0;
 }

 /*
Enter the elements: 
1 2 3 4 5 6 7 8 9 8 7 6 5 4 3 2
The entered elements are: 
1  2  3  4  5  6  7  8
9  8  7  6  5  4  3  2
 */