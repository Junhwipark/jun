#include<stdio.h>

int main(void) {

	char op;
	int x, y, result;

	printf("������ �Է��ϼ���:");
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
		printf("��� �Ҽ������ϴ�.");

		break;
	}

	printf("%d�Դϴ�.", &result);

	return 0;
}