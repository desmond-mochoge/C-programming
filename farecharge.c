/*NAME:DESMOND MESA
REG NO:PA106/G/28781/25
DESCRIPTION:PROGRAM TO CALCULATE FARE
*/
#include<stdio.h>
int calculateFare(int kilometer); //FUNCTION DEFINITON

int main(){  
float totalfare;	
float kilometer;
	
printf("Enter distance travelled:\n");
scanf("%f",&kilometer);
	
totalfare=calculateFare(kilometer); //FUNCTION CALL
	
printf("Your total fare is KES%.2f",totalfare);
return 0;	
}
int calculateFare(int kilometer){  //FUNCTION DECLARATION
	float totalfare;
	totalfare=kilometer*50;
	return totalfare;

}
