#include <stdio.h>

int main()
{
	int num1, num2, num3;
	int max;

	printf("세 정수를 입력 : ");
	scanf("%d %d %d", &num1, &num2, &num3);

	max = ((num1 > num2) ? num1 : num2) > num3 ? ((num1 > num2) ? num1 : num2) : num3;

	printf("최댓값: %d\n", max);

	return 0;
}