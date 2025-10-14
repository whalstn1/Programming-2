// ������ �迭�� ���Ͽ� �迭�� ���� �� �ִ񰪰� �ּڰ��� ã�� get_min_max() �Լ��� �����Ͻÿ�.
// ũ�Ⱑ 10�� int �迭�� ���ؼ� ���ϴ� ������ �ʱⰪ�� ä����� get_min_max() �Լ��� �ִ񰪰� �ּڰ��� ã�Ƽ� ����Ͻÿ�.


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
		printf("�ּڰ�: %d\n", min);
		printf("�ִ�: %d\n", max);
	}
	else {
		printf("�迭�� ũ�Ⱑ �ùٸ��� �ʽ��ϴ�.\n");
	}

	return 0;
}