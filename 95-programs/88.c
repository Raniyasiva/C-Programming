//Swap two numbers using function pointer:

#include<stdio.h>
void swap(int *a, int *b);
void main()
{
  int x,y;
  printf("The value of X is ");
  scanf("%d", &x);
  printf("The value of Y is ");
  scanf("%d",&y);
  printf("Before swaping \n");
  printf("X= %d\nY= %d\n",x,y);
  swap(&x,&y);
}

void swap(int *a, int *b)
{
    int temp;
    temp=(*a);
    (*a)=(*b);
    (*b)=temp;
    printf("After swaping \nX= %d\nY= %d",*a,*b);

}
/*
The value of X is 3
The value of Y is 6
Before swaping 
X= 3
Y= 6
After swaping  
X= 6
Y= 3
*/