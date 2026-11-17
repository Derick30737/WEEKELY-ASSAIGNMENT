//Name: DERICK 
//REG NO:CT100/G/30737/26
//Date:23/9/2026


#include <stdio.h>

int main(){
	//declare and intialize variables
	int height;
	float bankbalance;
	double phonenumber;
	
	printf("Enter your height:\t");
	scanf("%d", &height);
	
	printf("Enter your balance: \t");
	scanf("%f", &bankbalance);
	
	printf("Enter your number: \t");
	scanf("%lf", &phonenumber);
  
    printf("\n--- your details---\n");
    printf("height: %d metres\n",height);
    printf("bankbalance:KHS %.2f\n",bankbalance);
    printf("phonenumber: %2.lf\n",phonenumber);
	
}
		
	