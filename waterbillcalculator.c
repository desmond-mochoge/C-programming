/*
Name:DESMOND MESA MOCHOGE
Reg no:PA106/G/28781/25
Description:Water bill calculator
0-30 units=20 KES per unit
31-60 units=25 KES per unit
Above 60 units=30 KES per unit
*/
#include<stdio.h>  //header file

int main(){

	int water_units;
	double Total_water_bill;
	
	printf("Enter number of water units: ");
	scanf("%d", &water_units);
	
	if(water_units <= 30){
		Total_water_bill = water_units*20;
	}
	else if (water_units >30 && water_units<=60){
		Total_water_bill=water_units*25;
	}
	else if(water_units>60){
		Total_water_bill=water_units*30;
	}
	printf("Your total water bill is KES%.2lf", Total_water_bill);
	
	return 0;	
	
}