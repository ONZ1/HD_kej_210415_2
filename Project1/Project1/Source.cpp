#include<stdio.h>

int main(void) {

	while (true)
	{
		int num = 0;

		printf("\n1~9의 수를 입력하면 구구단이 출력됩니다.\n0을 입력하면 프로그램이 종료됩니다.\n\n");

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
	printf("프로그램 종료!\n");

	fgetc(stdin);
	return 0;
}