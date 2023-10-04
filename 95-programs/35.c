//matrix multiplication 3x3 using arrray

#include <stdio.h>
int main()
{
  int a[3][3],b[3][3],mul[3][3]={0};
  int i,j,k,sum;
  printf("The first set of matrix\n");
   for(i=0;i<3;i++)
    {
     for(j=0;j<3;j++)
       {
         scanf("%d",&a[i][j]);
	     }
    }
   printf("The second set of matrix\n");
     for(i=0;i<3;i++)
       {
	   for(j=0;j<3;j++)
	    {
	      scanf("%d",&b[i][j]);
	     }	
	    }	
  printf("3x3 matrices are \n");      
   for(i=0;i<3;i++)
     {
      for(j=0;j<3;j++)
       {
        for(k=0;k<3;k++)
	 {
	 sum=a[i][k]*b[k][j];       //sum=2
	 mul[i][j]=mul[i][j]+sum;  //mul[0][0]=0+2, mul[0][0]=2+2	
         }
        }
      }
       for(i=0;i<3;i++)
	  {
	   for(j=0;j<3;j++)
	    {
	      printf("%d\t",mul[i][j]); 
             }
	      printf("\n");
        }
    return 0;
  }

  /*
The first set of matrix
3 4 5 1 7 5 2 6 7 8 9 
The second set of matrix
1 2 3 4 5 6 7 8 9\
3x3 matrices are
57      69      54
47      60      64
63      78      75
 */