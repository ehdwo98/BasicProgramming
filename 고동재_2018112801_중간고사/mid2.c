#include <stdio.h>

int main()
{
	float num1, num2;
	int op;
	printf("�� �Ǽ��� �Է� : ");
	scanf("%f %f", &num1, &num2);
	printf("���� ���� ��ȣ ���� 1(+), 2(-), 3(*), 4(/) : ");
	scanf("%d", &op);

	switch (op)
	{
	case 1:
		printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
		break;
	case 2:
		printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
		break;
	case 3:
		printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
		break;
	case 4:
		printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
		break;
	default:
		break;
	}

	return 0;
}