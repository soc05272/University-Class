#include <stdio.h>
#define RATE 0.07 // ����
#define INVESTMENT 1000000 // �ʱ� ���ڱ� : õ����
#define YEARS 10 // ���� �Ⱓ

int  main(void)
{
	int i;
	double total = INVESTMENT;

	printf("=============\n");
	printf("����   ������\n");
	printf("=============\n");

	for (i = 1; i <= YEARS; i++)
	{
		total = total * (1 + RATE); // ���ο� ������ ���
		printf("%2d  %10.1f\n", i, total);
	}
	return 0;
}
