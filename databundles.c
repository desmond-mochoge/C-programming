/*
Name:DESMOND MOCHOGE MESA
REG NO:PA106/G/28781/25
Description:Mobile data bundle purchase
*/
#include<stdio.h>
int main(){
int choice;
	//Bundles menu bar
	printf("option  Bundle   cost(KES) \n");
	printf("     1.1OOMB   @  50        \n");
	printf("     2.500MB   @  200       \n");
	printf("     3.  1GB   @  350       \n");
	printf("     4.  2GB   @  600       \n");
	//Enter your choice
	printf("Enter your choice  (1-4):  \n");
	scanf("%d", &choice);
     
    switch(choice){
    	case 1 :
    		printf("You have selected 100MB,cost = 350KES\n");
    		break;
    	case 2 :
    		printf("You have selected 500MB,cost = 200KES\n");
    		break;
		case 3 :
			printf("You have selected 1GB,cost = 350KES\n");
			break;
		case 4 :
			printf("You have selected 2GB,Cost = 600KES\n");
			break;
		default:
			printf("Invalid choice");
			break;
		
    }
    return 0;

	
}