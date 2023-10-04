// To make such a pattern like the right angle triangle with a number increased by 1

#include <stdio.h>
int main()
{
    int i, j, k=1;
    
    for (i = 0; i <= 4; i++)
    {
        
         for (j = 1; j <= i; j++) 
            {
                printf("%d ", k++);
            }
        printf("\n");
    }
          return 0;    
}
/*
1 
2 3 
4 5 6 
7 8 9 10 
*/