#include <stdio.h>

int main(void)
{
	int x, y, sum;

	printf("첫번째 정수를 입력하세요 : ");
	scanf("%d", &x);

	printf("두번째 정수를 입력하세요 : ");
	scanf("%d", &y);

	sum = x + y;
	printf("두 수의 합 : %d", sum);

	return 0;
}
