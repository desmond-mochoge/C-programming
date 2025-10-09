/*NAME:DESMOND MESA
REG NO:PA106/G/28781/25
Description:Program to prompt user to enter correct password
*/
//Header file
#include<stdio.h>

// main function
int main(){
	//Declaration of variables
	int correct_password = 1234;
    int password;	
    //Loop function
	do {
		printf("Enter the password :\n");
		scanf("%d",&password);//prompting user to enter password
		
		if (password == correct_password){ //condition
			printf("Access granted \n");
		}
		else{
			printf("Wrong password! Try again\n");
		 }
    }
	while (password!= correct_password); //stop when user enter correct password
	


	return 0;
}

