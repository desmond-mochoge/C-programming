/*
Name:DESMOND MESA MOCHOGE
Reg no:PA106/G/28781/25
Description:Mobile data bundle purchase
Option  Bundle  Cost(KES)
     1.100MB    50
     2.500MB    200
     3.1GB      350
     4.2GB      600
     
     */

#include<stdio.h>
 int main(){
	 int option;
	 
	 printf("Select data bundles \n ");
     printf("1.100MB @ 50 KES    \n ");
     printf("2.500MB @ 200 KES   \n ");
     printf("3.1GB   @ 350 KES   \n ");
     printf("4.2GB   @ 600 KES   \n ");
     
     printf("Enter your choice(1-4): ");
     scanf("%d", &option);
     
     if(option==1){
	 printf("You selected 100MB.Cost=50 KES");
	 }
	 else if(option==2){
     printf("You selected 500MB.Cost=200KES");
	 }
     else if(option==3){
	 printf("You selected 1GB.Cost=350KES");	 
	 }
	 else if(option==4){
     printf("You selected 2GB.Cost=600KES");
	 }	 
	 else{
	 printf("Invalid choice");	 
	 }
      return 0;             
 }