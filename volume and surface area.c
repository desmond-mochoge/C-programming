/*
Name:DESMOND MESA
Reg no:PA106/G/28781/25
Description:Program to find volume and surface Area of a given cylinder
*/

#include<stdio.h>
#define PI 3.14
int main(){
	
	double radius ,height,volume,surface_area;
	
	printf("Enter height : ");  
	scanf("%lf", &height);
	
	printf("Enter radius: ");
	scanf("%lf", &radius);
	
	volume = PI*radius*radius*height;
	
	surface_area = (2*PI*radius*radius)+(2*PI*radius*height);
	
	printf("The volume of a cylinder is: %.2lf\n", volume);
	printf("The surface area of the cylinder is: %.2lf\n",surface_area);
	
	
	
	return 0;
}