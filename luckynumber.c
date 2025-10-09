/*Name:DESMOND MOCHOGE MESA
REG NO:PA106/G/28781/25 
Description :Lucky number guess
*/
//preprocessor directives
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	
	int lucky_number;
	int guess;
	int attempts=0;
	
	srand(time(NULL));// to generate random number
	lucky_number=rand()%20 +1;
	
	while(guess!=lucky_number){ //stop when guess is equal to lucky number
		
    attempts ++; //increment
    
	printf("Enter your secret number(1-20): "); //prompt
	scanf("%d", &guess);
	
	printf("Your guess is %d\n",guess);
	
	    if(guess>lucky_number){  //conditions
			printf("Too high!Try again\n");
		}
	    else if(guess<lucky_number){
	    	printf("Too low!Try again\n");	
        }
	}      // output display
           printf("Congratulations you have guessed the lucky number!\n");
           printf("It took you %d attempts.\n",attempts);
           
	
	  
	return 0;
}