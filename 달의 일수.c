#include<stdio.h>

int main(void) {

	int month, days;

	printf("���� �Է��ϼ���:");
	scaf_s("%d", &month);

	switch (month)
	{
	case 2:
		days = 28;
		break;
	case 4:
	case 6:
	case 8:
	case 10:
	case 12:
		days = 30;
		break;
	default:
		days = 31;
		break;
	}

	printf("�Է��Ͻ� ���� �ϼ���:%d", &days);

	return 0;

}