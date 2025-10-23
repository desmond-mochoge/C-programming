#include<stdio.h>
int calculateFare(int kilometer);

int main(){
float totalfare;	
float kilometer;
printf("Enter distance travelled:\n");
scanf("%f",&kilometer);
totalfare=calculateFare(kilometer); 
printf("Your total fare is KES%.2f",totalfare);
return 0;	
}
int calculateFare(int kilometer){
	float totalfare;
	totalfare=kilometer*50;
	return totalfare;
}