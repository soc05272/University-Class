#include <stdio.h>

int main(void)
{
	char op; // 연산자
	int x, y, result;
	
	printf("수식을 입력하시오(예 : 2 + 5)"); 
	printf(">>");
	
	scanf("%d %c %d", &x, &op, &y);
	
	if( op == '+')
	{
		result = x + y;
	}
	else if( op == '-')
	{
		result = x - y;
	}
	else if( op == '*')
	{
		result = x * y;
	}
	else if( op == '/')
	{
		result = x - y;
	}
	else if( op == '%')
	{
		result = x % y;
	}
	else
	{
		printf("지원되지 않는 연산자 입니다!!!\n");
	}
	
	printf("%d %c %d = %d", x, op, y, result);
	return 0;
}
