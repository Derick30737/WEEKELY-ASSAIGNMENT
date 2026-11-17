#include <stdio.h>
float calculatetax(float gross_salary);
int main(){
	float tax, net_salary, gross_salary;
	printf("Enter gross_salary: \t");
	scanf("%f",&gross_salary);
	//fuction call
	tax = calculatetax(gross_salary);
	net_salary = gross_salary-tax;
	
	printf("\n");
	printf("EMPLOYEE'S GROSS TAX \n");
	printf("===================\n");
	printf("gross_salary. %.2f \n", gross_salary);
	printf("tax_amount. %.2f \n",tax);
	printf("net_salary.%.2f \n", net_salary);
	printf("==============\n");
	return 0;
	
}
//function declaration
float calculatetax(float gross_salary){
	float tax;
if (gross_salary <30000){
	tax = 0.05 * gross_salary;
	}
	else if (gross_salary >=30000 && gross_salary<=59999){
	tax = 0.1*gross_salary;	
	}
	else if (gross_salary>=60000){
		tax = 0.15 * gross_salary;
	}
	return tax;
}

