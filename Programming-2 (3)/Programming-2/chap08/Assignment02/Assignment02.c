// 배열 원소를 가리키는 포인터와 포인터 연산을 이용해서 실수형배열의 모든 원소를 출력하는 프로그램을 작성하시오.
// 실수형 배열은 크기가 10이고 값은 마음대로 지정해셔 사용한다.


#include <stdio.h>

float arr[10] = { 0.10, 2.00, 4.50, 7.80, 9.70, 1.40, 6.60, 7.20 };

void po(float* p, int size) {
    for (int i = 0; i < size; i++) {
        printf("%f\n", p[i]);
    }
}

int main() {
    po(arr, 7); 
    return 0;
}