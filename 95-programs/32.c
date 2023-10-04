//Get 9 inputs and print in a 3x3 matrix

#include <stdio.h>
int main()
{
  int a[3][3],b[3][3];
  int i,j;
	
  printf("Entered the values \n");
   {
     for(i=0;i<3;i++)
      {
      for(j=0;j<3;j++) 
      	scanf("%d",&a[i][j]) ; 
      }
    printf("3x3 matrix : \n");
      {
     for(i=0;i<3;i++)
      {
      for(j=0;j<3;j++) 
      	printf("%d ",a[i][j]);

        printf("\n");
      } 
   }
}
}

/*
Entered the values 
1 2 7 8 9 0 3 4 5 7 6 
3x3 matrix : 
1 2 7
8 9 0
3 4 5
*/
