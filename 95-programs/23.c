//Code for the selected candidates for a job between the age 18 and below 55 and below 18 need include detailed description
 
#include<stdio.h>
void main()
{
 int age;
 printf("Age of a candidate: ");
 scanf("%d",&age);

 if(age>=18 && age<55)
  printf("Candidate is selected for a job");
 else if(age<18)
  printf("Candidate not selected");

}
/*Age of a candidate: 30
 Candidate is selected for a job
 
Age of a candidate: 15
Candidate not selected*/