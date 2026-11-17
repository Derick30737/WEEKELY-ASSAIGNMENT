#include <stdio.h>
//function prototype 
float calculatebill(int units_consumed,float cost);
int main()
{
float cost,bill;
int units_consumed;
printf("enter cost per unit consumed:");
scanf("%f",&cost);
printf("enter number of units consumed:");
scanf("%d",&units_consumed);
//function call
bill=calculatebill(cost,units_consumed);

printf("the total bill ksh%.2f\n",bill);

return 0;

}

//function declaration
float calculatebill(int units_consumed, float cost){
float bill;
bill=cost*units_consumed;

return bill;

}