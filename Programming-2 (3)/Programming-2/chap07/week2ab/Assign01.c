#include <stdio.h>
int arr();

int main()
{
	arr();

	return 0;

}

int arr()
{
	int num[10];
	int c;
	printf("ù��° ���� �Է��ϼ���");
	scanf("%d", num[0]);
	printf("������ �Է��ϼ���");
	scanf("%d", c);
	for (i = 0, i < 10, i++) {
		num[i + 1] = num[i] + c;
	}

}