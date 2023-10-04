// To display the n terms of odd number and their sum.

#include <stdio.h>
int main()
{
    int i, n, sum = 0;
    printf("Enter the n value ");
    scanf("%d", &n);
    printf("The odd numbers are ");
    for (i = 1; i < n; i = i + 2)
    {
        printf("%d ", i);
        sum = sum + i;
    }
    printf("\nSum of the odd numbers is %d",sum);

    return 0;
}
/*

Enter the n value 10
The odd numbers are 1 3 5 7 9 
Sum of the odd numbers is 25

*/
