#include <stdio.h>

int main()
{
	const int v[6] = { 1, 5, 10, 50, 100, 500 };  // 코인
	int c[6] = { 10, 20, 20, 5, 10, 50 }; // 각 원소는 1 ~ 100 이하의 값
	int M = 3252;  // 1 ~ 5만원 이하의 값
	int tSum = 0;

	for (int i =5 ; i>=0;i--)
	{
		if ((M / v[i]) > c[i]) {
			printf("%3d동전: %2d개\n", v[i], c[i]);
			M = M - v[i] * c[i];
			tSum += c[i];
		}
		else {
			printf("%3d동전: %2d개\n", v[i], M / v[i]);
			tSum += M / v[i];
			M = M % v[i];
		}
	}



	printf("\n필요한 동전 개수: %d\n", tSum);

	return 0;
}
