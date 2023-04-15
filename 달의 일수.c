#include<stdio.h>

int main(void) {

	int month, days;

	printf("달을 입력하세요:");
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

	printf("입력하신 달의 일수는:%d", &days);

	return 0;

}