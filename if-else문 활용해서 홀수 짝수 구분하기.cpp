#include <stdio.h>

int main(void)
{
	int number;
	
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &number);
	
	if(number % 2 == 0)
	{
		printf("�����Դϴ�\n");
	}
	else
	{
		printf("Ȧ�� �Դϴ�.\n");
	}
	
	return 0;
}
