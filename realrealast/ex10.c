#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int exam10() {

	int arr[10];
	// scanf�� �̿��ؼ� ���� 10���� �Է¹޾� �迭�� ������ �� ������ּ���.
	for (int i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
	}

	//1. [] �̿��ؼ�
	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	//2. [] �̿����� ����
	for (int i = 0; i < 10; i++) {
		printf("%d ", *(arr+i));
	}

	return 0;
}