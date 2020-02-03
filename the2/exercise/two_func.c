#include <stdio.h>

//custom function
void br(void);
void ic(void);

int main(void)

{

	printf("Brazil,Russia,India,China\n"); 
	ic();
	br();
	return 0;

}

void br(void)
{
	printf("Brazil,Russia"); 

}

void ic(void)
{
	printf("India,China,\n"); 

}


