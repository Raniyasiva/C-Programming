//Write a program in C to calculate the length of the string  using a pointer
#include<stdio.h>
#include<string.h>
void main()
{
    char name[30];
    int len,*l;
    l=&len;
    printf("Enter the name: ");
    gets(name);
    (*l) = strlen(name);
    printf("Length of a string is %d", *l);
}
/*
Enter the name: raniya
Length of a string is 6
*/