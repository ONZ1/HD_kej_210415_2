#include<stdio.h>

int main(void) {

	while (true)
	{
		int num = 0;

		printf("\n1~9�� ���� �Է��ϸ� �������� ��µ˴ϴ�.\n0�� �Է��ϸ� ���α׷��� ����˴ϴ�.\n\n");

		scanf_s("%d", &num);

		printf("\n");

		if (num == 0)break;
		
		else if (num>=1 and num<=9) {
			int i = 1;
			while (i < 10)
			{
				printf("%d * %d = %d\n", num, i, num * i);
				i++;
			}
		}
		else{
			printf("Error");
		}
	}
	printf("���α׷� ����!\n");

	fgetc(stdin);
	return 0;
}