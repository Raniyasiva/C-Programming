//To read any month number in integer and  display month name in the word

#include <stdio.h>
int main()
{
 int month;
 printf("Enter a month: ");
 scanf("%d", &month);

 switch(month)
 {
    case 1:printf("January");
           break;
    case 2:printf("February");
           break;
    case 3:printf("March");
           break;
    case 4:printf("April");
           break;
    case 5:printf("May");
           break;
    case 6:printf("june");
           break;
    case 7:printf("July");
           break;
    case 8:printf("August");
           break;
    case 9:printf("September");
           break;
    case 10:printf("October");
           break;
    case 11:printf("November");
           break;
    case 12:printf("December");
           break;
    default:printf("invalid");
 }

}
/*
Enter a month: 6
june
*/