//To display cube of the number upto given integer

#include<stdio.h>
int main()
{
    int i,cube,c,n;
    printf("Enter the number: ");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        cube=i*i*i;
        printf("%d ",cube);
    }
    return 0;
}
/*
Enter the number: 10
1 8 27 64 125 216 343 512 729 1000 
*/