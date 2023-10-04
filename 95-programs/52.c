/* 0  0  0  0  0  0  0  0  
1  1  1  1  1  1  1  1
0  0  0  0  0  0  0  0
1  1  1  1  1  1  1  1
0  0  0  0  0  0  0  0
1  1  1  1  1  1  1  1
0  0  0  0  0  0  0  0
5  5  5  5  5  5  5  5
*/


#include<stdio.h>
int call(int i);
void main()
{
    int i;
    
    for(i=0;i<8;i++)
    {      
        if(i%2==0 )
        call(0);
        else if(i%2!=0 && i!=7) 
        call(1);

        if(i==7)
        call(5);
       printf("\n");  
    }    
 }
int call(int i)
 {
     int j;
     
     for(j=0;j<7;j++)
     printf("%d ",i);    
 }