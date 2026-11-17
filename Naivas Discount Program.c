#include <stdio.h>

//function prototype
float caculateDiscount(float purchase_amount);

int main(){

    float amount,result,final_amount;
    printf("Enter purchase_amount: \t");
    scanf("%f", &amount);
    //function call
    result = caculateDiscount(amount);
    final_amount = amount - result;	

	printf("\n");
	printf("NAIVAS DISCOUNT PROGRAM: \n");
	printf("===============\n");
	printf("intial amount:ksh. %2.f \n",amount);
	printf("discount offered: ksh.%2.f \n",result);
	printf("finnal amount:ksh. %2.f \n",final_amount);
	printf("==============\n");
	
	return 0;
}
//function defination
float caculateDiscount(float purchase_amount){
float discount;
if (purchase_amount<5000){
	discount= 0.05*purchase_amount;
	}
	else if (purchase_amount>=5000 &&purchase_amount<=9999){
		discount=0.1*purchase_amount;
	}	
	else if (purchase_amount>=10000){
		discount=0.15* purchase_amount;
	}
	return discount;
	
	
	
	
	
	
	
}