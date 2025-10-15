#include <stdio.h>
#include <stdlib.h>

int sum_of_digits(int n)
{
	n = abs(n);
	if (n < 10)
		return n;
	else
		return (n % 10) + sum_of_digits(n / 10);
}

int main(void)

{
	int number;
	printf("Á¤¼ö?: ");
	scanf_s("%d", &number);
	printf("sum of digits: %d\n", sum_of_digits(number));
}