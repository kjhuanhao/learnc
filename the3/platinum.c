#include <stdio.h>
int main(void)

{

	float weight; //your weight
	float value; //change

	printf("Are you worth your weight in platinum?\n"); 
	printf("Let's check it out.\n"); 
	printf("Please enter your weight in puounds:"); 

	//get enter
	scanf("%f",&weight);

	//change dollor
	value = 1700.0 * weight * 14.5833;
	printf("Your weight in platinum is worth $%.2f.\n", value); 
	printf("You are esayily worth that! If platinum prices drop,\n"); 
	printf("eat more to maintain your value.\n"); 

	return 0;

}



