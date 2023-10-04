// To read any month in integer and display the number of days for this month
#include <stdio.h>
int main()
{
    int m;
    printf("Enter the month number: ");
    scanf("%d", &m);

    if ((m == 1)|| (m == 3) || (m == 5) || (m == 7) || (m == 8) || (m == 10) || (m == 12))
        printf("31 days");
    else if ((m == 4) || (m == 6) || (m == 9) || (m == 11))
        printf("30 days");
    else if (m == 2)
        printf("28 / 29 days");
    else
        printf("Invalid month");
    return 0;
}
/*

Enter the month number: 7
31 days
Enter the month number: 4
30 days
Enter the month number: 2
28 / 29 days

*/