#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int exam14() {

	// 사용자가 원하는 만큼 정수(int) 데이터를 저장해주세요.
	// 메모리를 효율적으로 사용해주세요.
	// 아래와 같이 입출력하면 됩니다. 단, 코드는 한번 작성한 후 수정할 수 없습니다.
	int num;
	printf("저장할 값의 개수 : ");
	scanf("%d", &num);
	
	int* arr = malloc(sizeof(int) * num);

	for (int i = 0; i < num; i++) {
		scanf("%d", &arr[i]);
	}

	// ex1)
	// 저장할 값의 개수 : 5

	// 1번째 값 : 1
	// 2번째 값 : 2
	// 3번째 값 : 3
	// 4번째 값 : 4
	// 5번째 값 : 5

	// 출력 : 1 2 3 4 5


	// ex2)
	// 저장할 값의 개수 : 3

	// 1번째 값 : 1
	// 2번째 값 : 2
	// 3번째 값 : 3

	// 출력 : 1 2 3
	printf("출력 : ");
	for (int i = 0; i < num; i++) {
		printf(" %d ", arr[i]);
	}

	free(arr);

	return 0;
}