#include <stdio.h>

int main(void)
{
	int fruit;
	
	printf("���� ��ȣ�� �Է��Ͻÿ� : ");
	scanf("%d", &fruit);
	
	switch(fruit)
	{
		case 1:
			printf("���\n");
			break;
			
		case 2:
			printf("��\n");
			break;	
			
		case 3:
			printf("�ٳ���\n");
			break;	
			
		default:
			printf("����\n");
			break;	
	}
	return 0;
}
