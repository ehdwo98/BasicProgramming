#include <stdio.h>

int main()
{
	int input;

	do {
		printf("\t[1] �ѽ�\n");
		printf("\t[2] ���\n");
		printf("\t[3] �н�\n");
		printf("\t[4] ��Ÿ\n");
		printf("�޴� ��ȣ ���� �� [Enter] : ");
		scanf("%d", &input);
		printf("���� �޴� %d\n", input);
		if (input >= 0 && input <= 4) {
			break;
		}

	} while (1);

	return 0;
}