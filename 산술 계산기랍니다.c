#include<stdio.h>

int main(void) {

	char op;
	int x, y, result;

	printf("수식을 입력하세요:");
	scanf_s("%d%c%d", x, op, y);

	switch (op)
	{
	case'+':
		result=x + y;
	case'-':
		result=x - y;
	case'*':
		result=x * y;
	case'/':
		result=x / y;
	case'%':
		result=x % y;

	default:
		printf("계산 할수없습니다.");

		break;
	}

	printf("%d입니다.", &result);

	return 0;
}