#include <stdio.h>

int main()
{
	const int v[6] = { 1, 5, 10, 50, 100, 500 };  // ����
	int c[6] = { 10, 20, 20, 5, 10, 50 }; // �� ���Ҵ� 1 ~ 100 ������ ��
	int M = 3252;  // 1 ~ 5���� ������ ��
	int tSum = 0;

	for (int i =5 ; i>=0;i--)
	{
		if ((M / v[i]) > c[i]) {
			printf("%3d����: %2d��\n", v[i], c[i]);
			M = M - v[i] * c[i];
			tSum += c[i];
		}
		else {
			printf("%3d����: %2d��\n", v[i], M / v[i]);
			tSum += M / v[i];
			M = M % v[i];
		}
	}



	printf("\n�ʿ��� ���� ����: %d\n", tSum);

	return 0;
}
