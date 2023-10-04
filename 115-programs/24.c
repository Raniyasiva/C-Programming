// To make such a pattern like right angle triangle with a number which all repeat a number in a row.

#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 4; i++)
        
    {
        for (j = 1; j <= i; j++)
            printf("%d ", i);
        printf("\n");
    }
    return 0;
}
/*
1       
2 2     
3 3 3   
4 4 4 4
*/