#include <stdio.h>

int main(void)
{
	printf("\t��\t��\tȭ\t��\t��\t��\t��\n");
	
	int day_number;
	
	for(day_number=1; day_number<=28; day_number++)
	{
		printf("\t%d", day_number);
		if(day_number % 7 == 0)
		{
			printf("\n");
		}
	}
	printf("\n");
	
	return 0;
 } 
