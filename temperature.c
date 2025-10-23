/*NAME:DESMOND MESA MOCHOGE
  REG NO:PA106/G/28781/25
  DESCRIPTION:Program to convert temperature from degree celsius to fahreint
*/
#include<stdio.h>

float convertToCelsius(float fahreint);//FUNCTION DEFINITION

int main(){
float fahreint;		
float celsius;

printf("Enter your temperature in fahreint\n");
scanf("%f",&fahreint);
//FUNCTION CALL
celsius = convertToCelsius(fahreint);
printf("Temperature in celsius is %.2fC",celsius );

return 0;
}

float convertToCelsius(float fahreint){         //FUNCTION DECLARATION
	int celsius;
	celsius=(fahreint-32) * 5/9;
	
	return celsius;
	
}