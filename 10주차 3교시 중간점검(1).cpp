#include <stdio.h>

int main(void)
{
	int n;
	int n1 = -1;
	int n2 = 0;
	int n3 = 5;
	
	printf("n�� �Է� �Ͻÿ� : ");
	scanf("%d", &n);
	 
	if(n == 0)
	{
		printf("A\n");
	}
	else if(n > 3)
	{
		printf("B\n");
	}
	else
	{
		printf("C\n");
	}
	
	
	return 0;
}
