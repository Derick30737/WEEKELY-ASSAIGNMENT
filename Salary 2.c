#include <stdio.h>
//function  prototype 
float calculatesalary(float amount,int hours);

int main()
{
float salary,amount;
int hours;
printf("enter amount paid per hour:");
scanf("%f",&amount);
printf("enter hours worked:");
scanf("%d",&hours);
//function call
salary=calculatesalary(amount,hours);

printf("total salary ksh%.2f\n",salary);

return 0;

}

//function declaration
float calculatesalary(float amount, int hours ){
float salary;
salary=amount*hours;

return salary;

}