/*NAME:DESMOND MESA MOCHOGE
  REG NO:PA106/G/28781/25
  DESCRIPTION:Weekly revenue tracker
*/

//Header file
#include<stdio.h>
//main function
int main(){
	int i;
	float sum=0;
	int revenue[7];
	float average;
	//loop function
	for(i=0;i<7;i++){
		printf("Enter revenue for day %d:",i+1);
		scanf("%d",&revenue[i]);
		
		sum =sum +revenue[i];
	}
	average=sum/7;
	//Display revenue updated
	printf("Your total weekly revenue is %.2f\n", sum);
	
	printf("Your average daily revenue is %.2f\n",average);
	
	return 0;
	
	

}
