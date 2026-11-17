

#include <stdio.h>

//function prototype
float calculatetotal(float price, int quantity);
int main()
{
float cost,total_cost;
int quantity;
printf("enter the price:");
scanf("%f",&cost);

printf("enter the quantity purchased:");
scanf("%d",&quantity);
//function call
total_cost=calculatetotal(cost ,quantity);
printf("the total cost is ksh%.2f\n",total_cost);

return 0;
}
//function declaration
float calculatetotal(float price,int quantity){
float total;
total=price*quantity;

return total;
}

