//Multiplication table:

#include<stdio.h>
void main()
{
 int i,n,table;
 printf("Multiplication table of : ");
 scanf("%d",&n);
 for(i=1;i<=10;i++)
 {
  table=i*5;
  printf("%d * 5= %d\n",i,table);
  }
 }

 /*Multiplication table of 5: 
1 * 5= 5
2 * 5= 10
3 * 5= 15
4 * 5= 20
5 * 5= 25
6 * 5= 30
7 * 5= 35
8 * 5= 40
9 * 5= 45
10 * 5 =50 */