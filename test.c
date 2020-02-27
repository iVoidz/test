#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int x = 0;
	double final = 0;
	int i;
	for(i = 0; i < 11; i++)
	{
		x = x + 2;
	}	
	final = x / 20;
	printf("Final x: %d \n", x);
	printf("Value: %.3f \n",final);	
	
	return EXIT_SUCCESS;
}
