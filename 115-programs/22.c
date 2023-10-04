//To display the pattern like right angle trianlge using an asterisk

#include<stdio.h>

int main()
{
    int i,j;
    for(i=0;i<4;i++)
    {
        for(j=0;j<=i;j++)
        printf("* ");
        printf("\n");
    }
    return 0;
}
/*

* 
* * 
* * * 
* * * * 

*/