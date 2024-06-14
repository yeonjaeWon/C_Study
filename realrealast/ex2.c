// 문제 : 변수 c의 값을 변경해주세요.
// 조건 : c의 값을 직접 바꾸는 것은 안됩니다.
// 조건 : `c = 220;` 은 안됩니다.

#include <stdio.h>

int exam2(void) {

	unsigned char c = 200;

	// 수정 가능 지역 시작
	unsigned char* a = &c;
	*a = 220;

	// 수정 가능 지역 끝

	printf("c : %d\n", c);
	//출력 => c : 220

	return 0;
}