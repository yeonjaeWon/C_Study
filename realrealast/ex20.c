// 문제 : 배열을 훼손하는 change 함수를 만들어주세요.(배열의 포인터)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void change3(int** px) {
	// v1. 포인터 연산
	*(*px + 0) = 200;
	*(*px + 1) = 400;

	/* v2.배열문법으로
	px[0][0] = 200;
	px[0][1] = 400;

	// v3. 포인터 연산 + 배열문법 같이
	(*px)[0] = 200;
	(*px)[1] = 400;

	*(px[0] + 0) = 200;
	*(px[0] + 1) = 400;
	*/
	// 나머지 더 생각 나시는 분은 다른 방법 풀이
}

int exam20() {
	int x[2] = { 100, 200 };
	// x : 배열변수
	// x의 값은 자동으로 x[0]의 주소값을 가진다.
	// x == &x[0]
	// x의 타입은 int* 이다.

	printf("change 함수를 호출하기 전, x[0] : %d, x[1] : %d\n", x[0], x[1]);

	int* p = x;
	printf("%lld\n", &p);
	printf("%lld\n", p);
	printf("%lld\n", x);
	printf("%lld\n", &x[0]);
	printf("%lld\n", &x[1]);
	change3(&p);

	printf("change 함수를 호출한 후, x[0] : %d, x[1] : %d\n", x[0], x[1]);
	// 출력 => change 함수를 호출하기 전, x[0] : 200, x[1] : 400

	return 0;
}