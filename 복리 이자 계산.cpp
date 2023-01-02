#include <stdio.h>
#define RATE 0.07 // 이율
#define INVESTMENT 1000000 // 초기 투자금 : 천만원
#define YEARS 10 // 투자 기간

int  main(void)
{
	int i;
	double total = INVESTMENT;

	printf("=============\n");
	printf("연도   원리금\n");
	printf("=============\n");

	for (i = 1; i <= YEARS; i++)
	{
		total = total * (1 + RATE); // 새로운 원리금 계산
		printf("%2d  %10.1f\n", i, total);
	}
	return 0;
}
