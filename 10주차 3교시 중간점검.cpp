#include <stdio.h>

int main(void)
{
	int n;
	
	printf("���� ����� �Է��Ͻÿ� : ");
	scanf("%d", &n);
	
	if(n < 100)
	{
		printf("%dml : small", n);
	}
	else if(n >= 100 && n < 200 )
	{
		printf("%dml : midium", n);
	}
	else
	{
		printf("%dml : large", n);
	}
	return 0;
}
