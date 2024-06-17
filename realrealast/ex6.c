// 문제 : 값을 교체하는 change 함수를 만들어주세요.

#include <stdio.h>

// ======= change 구현 ========
void change1(int* aa, int* bb) {
	int temp = *aa;
	*aa = *bb;
	*bb = temp;
}

int exam6() {

	int a = 10;
	int b = 20;

	printf("change 함수 호출하기 전의 a : %d, b :%d\n", a, b);

	change1(&a, &b); // 이부분 수정 가능

	printf("change 함수 호출한 후의 a : %d, b :%d\n", a, b);
	// 출력 => change 함수 호출한 후의 a : 20, b : 10

	return 0;
}