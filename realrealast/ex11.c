#include <stdio.h>
int print_arr(int *arr, int len) {
	for (int i = 0; i < len; i++) {
		printf("%d ", *(arr+i));
	}
	printf("\n");
}

int exam11() {

	int arr[4] = { 1,2,3,4 };
	print_arr(arr, 4);
	// 출력 : 1 2 3 4

	int arr2[6] = { 1,2,3,4,5,6 };
	print_arr(arr2, 6);

	// 출력 : 1 2 3 4 5 6


	return 0;
}