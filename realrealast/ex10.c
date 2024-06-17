#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int exam10() {

	int arr[10];
	// scanf를 이용해서 숫자 10개를 입력받아 배열에 저장한 후 출력해주세요.
	for (int i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
	}

	//1. [] 이용해서
	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	//2. [] 이용하지 말고
	for (int i = 0; i < 10; i++) {
		printf("%d ", *(arr+i));
	}

	return 0;
}