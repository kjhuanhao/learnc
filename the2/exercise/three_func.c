#include <stdio.h>
/* custom function */
	
void deny(void);
void jolly(void);

int main(void)
{

	jolly();
	deny();
	return 0;

}
void jolly(void)
{
	printf("For he's a jolly good fellow!\n"); 
	printf("For he's a jolly good fellow!\n"); 
	printf("For he's a jolly good fellow!\n"); 

}
void deny(void)
{
	printf("Which nobody can deny!"); 
}

