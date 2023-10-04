//Average Filter

#include<stdio.h>
int a[5][5];
int avg(int l,int m);

int main()
{
int i,j,l,m;
float sum=0,average,b[5][5];
printf("Enter the elements \n");
 
 for(i=0;i<5;i++)
{
  for(j=0;j<5;j++)
 {
  scanf("%d",&a[i][j]);
  b[i][j]=0;
 }
}
printf("The entered elements are \n");
 for(i=0;i<5;i++)
{
 for(j=0;j<5;j++)
  {
   printf("%d  ",a[i][j]);
  }
 printf("\n");
}
printf("The average filter: \n");
 
 for(i=0;i<5;i++)
{
 for(j=0;j<5;j++)
{
 l=i-1;
 m=j-1;
 sum=sum+avg(l,m);

 l=i-1;
 m=j;
 sum=sum+avg(l,m);
 
 l=i-1;
 m=j+1;
 sum=sum+avg(l,m);
 
 l=i;
 m=j-1;
 sum=sum+avg(l,m);

 l=i;
 m=j;
 sum=sum+avg(l,m);

 l=i;
 m=j+1;
 sum=sum+avg(l,m);

 l=i+1;
 m=j-1;
 sum=sum+avg(l,m);

 l=i+1;
 m=j;
 sum=sum+avg(l,m);
 
 l=i+1;
 m=j+1;
 sum=sum+avg(l,m);
 
 average= sum/9;
 b[i][j]= average;
 sum=0;
 }
}
 for(i=0;i<5;i++)
{
 for(j=0;j<5;j++)
 printf("%.3f ", b[i][j]);
 printf("\n");
}
return 0;
}

int avg(int l,int m)
{
 if(l>=0 && m>=0 && l<5 && m<5)
 return a[l][m];
 else
 return 0;
}

/*
Enter the elements
44 5 6 7 8 9 3 2 1 2 9 8 7 6 3 4 5 6 1 2 3 9 8 7 6 5 4 9 7 6 5 4 3  
The entered elements are 
4  5  6  7  8
9  3  2  1  2
9  8  7  6  3
4  5  6  1  2
3  9  8  7  6
The average filter:
2.333 3.222 2.667 2.889 2.000 
4.222 5.889 5.000 4.667 3.000 
4.222 5.889 4.333 3.333 1.667 
4.222 6.556 6.333 5.111 2.778 
2.333 3.889 4.000 3.333 1.778 
*/
