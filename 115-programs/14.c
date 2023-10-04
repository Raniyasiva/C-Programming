// To check whether a triangle can be formed by a given value of angles

#include <stdio.h>
int main()
{
    int a, b, c, total;
    printf("Enter the three angles: ");
    scanf("%d %d %d", &a, &b, &c);

    total = a + b + c;
    if (total == 180)
        printf("It can form triangle");
    else
        printf("It cannot form triangle");
    return 0;
}
/*
Enter the three angles: 60 70 50
It can form triangle

Enter the three angles: 40 10 30
It cannot form triangle
*/