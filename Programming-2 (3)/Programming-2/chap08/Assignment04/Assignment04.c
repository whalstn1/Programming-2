// 배열 원소를 가리키는 포인터를 이용해서 실수형 배열의 평균을 구하는 프로그램을 작성하시오.
#include <stdio.h>

float arr[10] = { 0.10, 2.00, 3.40, 5.20, 4.50, 7.80, 9.70, 1.40, 6.60, 7.20 };

void print_array(float* p, int size);
float get_average(float* p, int size);

int main(void) {
    printf("배열: ");
    print_array(arr, 10);

    float avg = get_average(arr, 10);
    printf("평균: %.2f\n", avg);

    return 0;
}

void print_array(float* p, int size) {
    for (int i = 0; i < size; i++) {
        printf("%.2f ", *(p + i));
    }
    printf("\n");
}

float get_average(float* p, int size) {
    float sum = 0.0f;
    for (int i = 0; i < size; i++) {
        sum += *(p + i);
    }
    return sum / size;
}