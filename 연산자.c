#include<stdio.h>

int main(void) {
	char op;
	int x, y, result;

	printf("수식을 입력하세요(예: 2+5)>>");
	scanf_s("%d %c %d", &x, &op, &y);

	if (op == '+')
		result = x + y;
	else if (op == '-')
		result = x - y;
	else if (op == '*')
		result = x * y;
	else if (op == x % y)
		result = x % y;
	else if (op == '/')
		result = x / y;
	else
		printf("지원하지 않는 연산자입니다.");

	printf("%d%c%d=%d\n", x, op, y, result);
	return 0;
}