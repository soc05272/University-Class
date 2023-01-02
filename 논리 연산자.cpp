#include <stdio.h>

int main(void)
{
	int x, y;
	
	printf("두 개의 정수를 입력하세요 : ");
	scanf("%d %d", &x, &y);
	
	printf("%d && %d = %d\n", x, y ,x && y);
	printf("%d || %d = %d\n", x, y ,x || y);
	printf("!%d = %d\n", x, !x);
	
	return 0;
}
