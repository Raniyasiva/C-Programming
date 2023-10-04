//Print 10 to 20 numbers except 12,15,18

#include<stdio.h>
void main()
{
    int i;
    printf("Numbers except 12,15 and 18 \n");
    for(i=10;i<=20;i++)
    {
        if(i%3!=0)
        printf("%d  ",i);
    }
 }
    /*Numbers except 12,15 and 18
      10  11  13  14  16  17  19  20*/