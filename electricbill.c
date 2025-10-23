/*NAME:DESMOND MESA MOCHOGE
  REG NO:PA106/G/28781/25
  DESCRIPTION:Program to calculate electric bill
*/
#include<stdio.h>

int calculate_electric_bill(int units);//FUNCTION DEFINITION

int main(){
float bill;	
int units;
	
printf("Enter number of units used\n");
scanf("%d",&units);
	
bill=calculate_electric_bill(units);   //FUNCTION CALL
	
printf("Total Electric bill is KES%.2f",bill);
return 0;	
}
int calculate_electric_bill(int units){    //FUNCTION DECLARATION
	float totalbill=0.0;
	if(units <=100){
	totalbill=units*10;
	}
	else if(units<=200){
	totalbill=(100*10)+((units-100)*15);		
	}
	else{
	totalbill=(100*10)+(100*15)+((units-200)*20);
	}
	return totalbill;
}

