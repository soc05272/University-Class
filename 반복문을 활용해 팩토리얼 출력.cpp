#include <stdio.h>

int mian(void)
{
	long fact = 1;
	int i, n;
	
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &n);

	i = 0;
	while(i <= n)
	{
		fact = fact * i;
		i++;
	}
	printf("%d!�� %d�Դϴ�.", n, fact);

	return 0;
}
