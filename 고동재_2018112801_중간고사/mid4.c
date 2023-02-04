#include <stdio.h>

int main()
{
	for (int i = 1; i < 10; i++) {
		for (int j = 2;j < 10;j++) {
			printf("%2d x %2d = %2d ", j, i, i*j);
		}
		printf("\n");
	}
	return 0;
}