//Take 10 student

#include <stdio.h>
int main()
{
   int mark[10]={100,98,97,78,82,94,95,91,85,77};
   int i,Total=0,Avg;
   printf("Enter the student marks: ");
	
   for(i=0;i<10;i++)
  {
    printf("%d\t\n",mark[i]);
  }
    for(i=0;i<10;i++)
  {
    Total= Total+mark[i];
  }
    Avg=Total/10;
    printf("The Total mark is %d\n",Total);
    printf("The average mark is %d",Avg);
}

/*
Enter the student marks: 100
98
97
78
82
94
95
91
85
77
The Total mark is 897
The average mark is 89
*/