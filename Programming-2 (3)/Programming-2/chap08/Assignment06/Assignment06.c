// 정수형 배열에 대하여 배열의 원소 중 최댓값과 최솟값을 찾는 get_min_max() 함수를 정의하시오.
// 크기가 10인 int 배열에 대해서 원하는 값으로 초기값을 채운다음 get_min_max() 함수로 최댓값과 최솟값을 찾아서 출력하시오.


#include <stdio.h>

int get_min_max(int* arr, int size, int* min, int* max) {
	if (size <= 0) return -1; 
	*min = *max = arr[0]; 
	for (int i = 1; i < size; i++) {
		if (arr[i] < *min) {
			*min = arr[i];
		}
		if (arr[i] > *max) {
			*max = arr[i];
		}
	}
	return 0;
}

int main() {
	int arr[10] = { 23, 45, 62, 12, 99, 83, 23, 50, 72, 37 };
	int min, max;

	if (get_min_max(arr, 10, &min, &max) == 0) {
		printf("최솟값: %d\n", min);
		printf("최댓값: %d\n", max);
	}
	else {
		printf("배열의 크기가 올바르지 않습니다.\n");
	}

	return 0;
}