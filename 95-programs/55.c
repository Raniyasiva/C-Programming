//Transpose of an array (a[2][3])T=a[3][2]

#include<stdio.h>
void main()
{
    int i,j,k,temp,a[5][5],b[5][5];
    printf("Enter the elements: ");
    for(i=0;i<2;i++)
    {
      for(j=0;j<3;j++)
      scanf("%d",&a[i][j]);
    }
    printf("Entered elements \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
         {
        printf("%d ",a[i][j]);
         b[i][j]=a[i][j];
          }
        printf("\n");
    }

  printf("Transpose of an array: \n");  
  for(i=0;i<3;i++)
    {
      for(j=0;j<2;j++)
      {
       printf("%d ",b[j][i]);
      }
       printf("\n");
    }
}
/*Enter the elements: 1 2 3 4 5 6 7
Entered elements       
1 2 3 
4 5 6 
Transpose of an array: 
1 4 
2 5 
3 6 */
            

