#include <stdio.h>
#include <stdlib.h>

int count_digits(int n) 
{
    n = abs(n); 
    if (n < 10)
        return 1;
    else
        return 1 + count_digits(n / 10);
}

int main()
{
    int number;

    printf("Á¤¼ö?: ");
    scanf_s("%d", &number);

    printf("count of digits: %d\n", count_digits(number));

    return 0;
}
