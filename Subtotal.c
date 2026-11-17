#include <stdio.h>

float calculatesubtotal(float p1, float p2, float p3, float p4, float p5){
 float subtotal ;
subtotal=(p1+p2+p3+p4+p5);
return subtotal;
}

float calculatediscount (float subtotal){
float discount;
if(subtotal>=10000){
discount=subtotal*0.1;
}
else if(subtotal>=5000 && subtotal<=9999){
discount=subtotal*0.05;
}
else if(subtotal<5000){
discount=subtotal*0.0;
}
return discount;

}

float calculatefinalamount(float subtotal, float discount){
float finalamount;
finalamount=(subtotal-discount);

return finalamount;

}

int main(){
float p1,p2,p3,p4,p5;
float subtotal,discount,finalamount;

printf("enter price of product 1:");
scanf("%f",& p1);
printf("enter price of product 2:");
scanf("%f",& p2);
printf("enter price of product 3:");
scanf("%f",& p3);
printf("enter price of product 4:");
scanf("%f",& p4);
printf("enter price of product 5:");
scanf("%f",& p5);

subtotal=calculatesubtotal(p1,p2,p3,p4,p5);

discount=calculatediscount(subtotal);

finalamount=calculatefinalamount(subtotal,discount);


printf("subtotal ksh%.2f\n",subtotal);
printf("discount ksh%.2f\n", discount);
printf("final amount ksh%.2f\n",finalamount);


}






