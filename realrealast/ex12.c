// 문제 : 배열을 훼손하는 change 함수를 만들어주세요.

#include <stdio.h>
// 여기서 change 함수를 구현해주세요.
int change2(int* arr) {
	// 1. [] 이용
	arr[0] = arr[0]*2;
	arr[1] = arr[1]*2;

	// 2. [] 이용 X
	*arr = (*arr) * 2;
	*(arr + 1) = *(arr + 1) * 2;
}


int exam12() {

	int x[2];
	x[0] = 100;
	x[1] = 200;
	//int x[2] = {100, 200}; // 위 3 줄 코드의 같은 의미이다.

	printf("change 함수를 호출하기 전, x[0] : %d, x[1] : %d\n", x[0], x[1]);

	printf("x의 크기 : %lu\n", sizeof(x));

	// 여기서 change 함수를 실행해주세요.
	change2(x);

	printf("change 함수를 호출한 후, x[0] : %d, x[1] : %d\n", x[0], x[1]);
	// 출력 => change 함수를 호출한 후, x[0] : 200, x[1] : 400

	return 0;
}