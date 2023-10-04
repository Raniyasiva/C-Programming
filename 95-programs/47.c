//Median Filter

#include<stdio.h>
void main()
{
 int i,j,l,m,n,o,median,temp;
 int a[5][5],b[5][5],c[10];

 printf("Enter the elements: \n");
 for(i=0;i<5;i++)
 {
  for(j=0;j<5;j++)
  {
  scanf("%d",&a[i][j]);
  b[i][j]=0;
  }
 }
 printf("Entered elements \n");
 for(i=0;i<5;i++)
 {
 for(j=0;j<5;j++)
 printf("%d  ",a[i][j]); 

 printf("\n");
 }

 for(i=0;i<5;i++)
 {
  for(j=0;j<5;j++)
 {
  l=i-1;
  m=j-1;

  if(l>=0 && m>=0 && l<5 && m<5)
  c[0]=a[l][m];
  else
  c[0]=0;

  l=i-1;
  m=j;
 
  if(l>=0 && m>=0 && l<5 && m<5)
  c[1]=a[l][m];
  else
  c[1]=0;

  l=i-1;
  m=j+1;

  if(l>=0 && m>=0 && l<5 && m<5)
  c[2]=a[l][m];
  else
  c[2]=0;

  l=i;
  m=j-1;

  if(l>=0 && m>=0 && l<5 && m<5)
  c[3]=a[l][m];
  else
  c[3]=0;

  l=i;
  m=j;
  if(l>=0 && m>=0 && l<5 && m<5)
  c[4]=a[l][m];
  else
  c[4]=0;
 
  l=i;
  m=j+1;

  if(l>=0 && m>=0 && l<5 && m<5)
  c[5]=a[l][m];
  else
  c[5]=0;

  l=i+1;
  m=j-1;

  if(l>=0 && m>=0 && l<5 && m<5)
  c[6]=a[l][m];
  else
  c[6]=0;

  l=i+1;
  m=j;

  if(l>=0 && m>=0 && l<5 && m<5)
  c[7]=a[l][m];
  else
  c[7]=0;

  l=i+1;
  m=j+1;

  if(l>=0 && m>=0 && l<5 && m<5)
  c[8]=a[l][m];
  else
  c[8]=0;
 
printf("before ordering array c\n");
  for(n=0;n<9;n++)
  printf("%d ",c[n]);

  printf("\n");

 for(n=0;n<9-1;n++)
 {
  for(o=n+1;o<9;o++)
  {
   if(c[n]>c[o])
   {
     temp=c[n];
     c[n]=c[o];
     c[o]=temp;
    }
   }
  }
printf("after ordering array c\n");
 for(n=0;n<9;n++)
printf("%d ",c[n]);
printf("\n");
 
 median= c[4];
 b[i][j]=median;
 }
} 

 printf("\nThe median filter \n");
 for(i=0;i<5;i++)
 {
  for(j=0;j<5;j++)
  printf("%d  ",b[i][j]);
  printf("\n");
 }
} 

/*Enter the elements: 
1 2 3 4 5 6 7 8 9 8 7 9 6 7 4 5 3 2 1 5 6 7 8 9 2 3 4 5 6 7 
Entered elements 
1  2  3  4  5
6  7  8  9  8
7  9  6  7  4  
5  3  2  1  5
6  7  8  9  2
before ordering array c
0 0 0 0 1 2 0 6 7
after ordering array c
0 0 0 0 0 1 2 6 7 
before ordering array c
0 0 0 1 2 3 6 7 8
after ordeig array c
0 0 0 1 2 3 6 7 8
before ordering array c
0 0 0 2 3 4 7 8 9
after ordering array c
0 0 0 2 3 4 7 8 9
before ordering array c
0 0 0 3 4 5 8 9 8
after ordering array c
0 0 0 3 4 5 8 8 9 
before ordering array c
0 0 0 4 5 0 9 8 0
after ordering array c
0 0 0 0 0 4 5 8 9 
before ordering array c
0 1 2 0 6 7 0 7 9
after ordering array c
0 0 0 1 2 6 7 7 9
before ordering array c
1 2 3 6 7 8 7 9 6
after ordering array c
1 2 3 6 6 7 7 8 9
before ordering array c
2 3 4 7 8 9 9 6 7
after ordering array c
2 3 4 6 7 7 8 9 9
before ordering array c
3 4 5 8 9 8 6 7 4 
after ordering array c
3 4 4 5 6 7 8 8 9
before ordering array c
4 5 0 9 8 0 7 4 0
after ordering array c
0 0 0 4 4 5 7 8 9
before ordering array c
0 6 7 0 7 9 0 5 3
after ordering array c
0 0 0 3 5 6 7 7 9
before ordering array c
6 7 8 7 9 6 5 3 2
after ordering array c
2 3 5 6 6 7 7 8 9
before ordering array c
7 8 9 9 6 7 3 2 1
after ordering array c
1 2 3 6 7 7 8 9 9 
before ordering array c
8 9 8 6 7 4 2 1 5
after ordeig array c
1 2 4 5 6 7 8 8 9
before ordering array c
9 8 0 7 4 0 1 5 0
after ordering array c
0 0 0 1 4 5 7 8 9
before ordering array c
0 7 9 0 5 3 0 6 7 
after ordering array c
0 0 0 3 5 6 7 7 9
before ordering array c
7 9 6 5 3 2 6 7 8 
after ordeig array c
2 3 5 6 6 7 7 8 9
before ordering array c
9 6 7 3 2 1 7 8 9
after ordering array c
1 2 3 6 7 7 8 9 9
before ordering array c
6 7 4 2 1 5 8 9 2
after ordering array c
1 2 2 4 5 6 7 8 9
before ordering array c
7 4 0 1 5 0 9 2 0
after ordering array c
0 0 0 1 2 4 5 7 9 
before ordering array c
0 5 3 0 6 7 0 0 0
after ordeig array c
0 0 0 0 0 3 5 6 7 
before ordering array c
5 3 2 6 7 8 0 0 0
after ordering array c
0 0 0 2 3 5 6 7 8
before ordering array c
3 2 1 7 8 9 0 0 0
after ordering array c
0 0 0 1 2 3 7 8 9
before ordering array c
2 1 5 8 9 2 0 0 0
after ordering array c
0 0 0 1 2 2 5 8 9
before ordering array c
1 5 0 9 2 0 0 0 0
after ordering array c
0 0 0 0 0 1 2 5 9

The median filter
0  2  3  4  0
2  6  7  6  4
5  6  7  6  4
5  6  7  5  2
0  3  2  2  0  */