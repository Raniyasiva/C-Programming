//To display the multiplication table of a given number

#include<stdio.h>
int main()
{
    int n,i,mul;
    printf("Enter the number: ");
    scanf("%d",&n);

    for(i=1;i<=10;i++)
    {
        mul=i*n;
        printf("%d * %d = %d\n",i,n,mul);
    }
return 0;
}
/*

Enter the number: 5
1 * 5 = 5
2 * 5 = 10
3 * 5 = 15
4 * 5 = 20
5 * 5 = 25
6 * 5 = 30
7 * 5 = 35
8 * 5 = 40
9 * 5 = 45
10 * 5 = 50

*/