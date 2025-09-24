/*Name:DESMOND MESA
Res no:PA106/G/28781/25
Description:Program to check whether an individual qualifies for a loan
*/

#include<stdio.h>

int main(){
	
	int age;
	double salary;
	
	printf("Enter your age: ");
	scanf("%d", &age);
	
	printf("Enter your salary: ");
	scanf("%lf", &salary);
	
	 if((age>= 21)&&(salary>= 21000.00)){
		printf("Congratulations you qualify for a loan");

	}
	else{
		printf("Unfortunaately,we are unable to offer you a loan at this time ");
	}
	
	return 0;
}