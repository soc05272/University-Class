#include <stdio.h>

int main(void)
{
	int fruit;
	
	printf("과일 번호를 입력하시오 : ");
	scanf("%d", &fruit);
	
	switch(fruit)
	{
		case 1:
			printf("사과\n");
			break;
			
		case 2:
			printf("배\n");
			break;	
			
		case 3:
			printf("바나나\n");
			break;	
			
		default:
			printf("과일\n");
			break;	
	}
	return 0;
}
