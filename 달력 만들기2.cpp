#include <stdio.h>

int main(void)
{
	printf("\t일\t월\t화\t수\t목\t금\t토\n");
	
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
