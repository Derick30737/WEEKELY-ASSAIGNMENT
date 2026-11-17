#include <stdio.h>

float calculatecharge(float units){
float charge;
 if(units<=50 ){
charge=units*10;
}
else if(units<=150 ){
charge=(50*10)+(units-50)*15;
}

else if(units>150){
charge=(50*10)+(150-50)*15+(units-150)*20;
}

return charge;
}

float calculatetax(float charge){
float tax;
tax= charge*0.1;
return tax;
}

float calculatetotalbill(float charge,float tax){
float totalbill;
totalbill=(charge+tax);

return totalbill;
}
int main()
{
int units;
float charge,tax, totalbill;

printf("enter number of units consumed:");
scanf("%d",&units);

charge=calculatecharge(units);
tax=calculatetax(charge);
totalbill=calculatetotalbill(charge,tax);

printf("units consumed %d\n", units);
printf("charge ksh%.2f\n",charge);
printf("tax paid ksh%.2f\n",tax);
printf("totalbill ksh%.2f\n",totalbill);


}