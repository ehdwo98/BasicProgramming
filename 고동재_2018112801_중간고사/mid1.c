#include <stdio.h>

int main()
{
	int num1, num2, num3;
	int max;

	printf("�� ������ �Է� : ");
	scanf("%d %d %d", &num1, &num2, &num3);

	max = ((num1 > num2) ? num1 : num2) > num3 ? ((num1 > num2) ? num1 : num2) : num3;

	printf("�ִ�: %d\n", max);

	return 0;
}