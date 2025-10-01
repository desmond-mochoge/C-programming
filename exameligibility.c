/*
Name:DESMOND MESA
Reg:PA106/G/28781/25
Descriprion:Program to check students eligibility for a exam
*/
#include<stdio.h> //header file

int main(){      //main function

int attendance , average_marks;


printf("Enter your attendance: ");
scanf("%d", &attendance);

printf("Enter your average marks: ");
scanf("%d", &average_marks);

if(attendance >= 75 && average_marks >=40){
	printf("you are eligible for exams");
   }  	
	else{
		printf("Not eligible.");
	}
	
	return 0 ;
	
}
	
