#include <stdio.h>

int main(void)
{
	int i,j;
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%d ���ϱ� %d�� %d\n", i, j, i*j);
		}
	}
	return 0;
}
