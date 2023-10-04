//To read 10 numbers from keyboard and find their sum and average

#include<stdio.h>
int main()
{
    int i,sum=0;
    float avg;
    for(i=1;i<=10;i++)
    {
sum=sum+i;
    }
    printf("Sum= %d\n",sum);
    avg=sum/10;
    printf("Average = %f",avg);
    return 0;
}
/*
Sum= 55
Average = 5.000000
*/