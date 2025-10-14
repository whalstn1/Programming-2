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
	printf("첫번째 항을 입력하세요");
	scanf("%d", num[0]);
	printf("공차를 입력하세요");
	scanf("%d", c);
	for (i = 0, i < 10, i++) {
		num[i + 1] = num[i] + c;
	}

}