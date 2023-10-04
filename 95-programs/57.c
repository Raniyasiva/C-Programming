//Insert  the values (111) 5th element in array a[10]
#include<stdio.h>
void main()
  {
     int i,pos,ele,n,a[10];

     printf("Enter the elements in an array ");
     for(i=0;i<10;i++)
     scanf("%d",&a[i]);
   
     printf("Enter the position to be insertd ");
     scanf("%d",&pos);
     printf("Enter the element to be inserted ");
     scanf("%d", &ele);
     
     for(i=11;i>=pos;i--)
        a[i]=a[i-1];
      a[pos-1]=ele;
     
    printf("After insertion of an array ");
    for(i=0;i<11;i++)
     {
        printf("%d ",a[i]);
     }
  }
  /*
Enter the elements in an array 1 2 3 4 5 6 7 8 9 10 
Enter the position to be insertd 5
Enter the element to be inserted 111
After insertion of an array 1 2 3 4 111 5 6 7 8 9 10 11 
  */