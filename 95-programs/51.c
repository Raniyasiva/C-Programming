//use 1 forloop to run a program:

/*0 0 0 0 0 0 0 0 
1 1 1 1 1 1 1 1 
0 0 0 0 0 0 0 0 
1 1 1 1 1 1 1 1 
0 0 0 0 0 0 0 0 
1 1 1 1 1 1 1 1 
0 0 0 0 0 0 0 0 
1 1 1 1 1 1 1 1 */

#include<stdio.h>
int call(int i);
void main()
{
    int i;
    for(i=0;i<8;i++)
    {
        if(i%2==0)
        call(0);
        else
        call(1);
        printf("\n");
    }
}
int call(int i)
{
     int j;
     for(j=0;j<8;j++)
     printf("%d ",i);
}