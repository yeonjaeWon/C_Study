
// 문제 : 변수 i의 값을 바꿔주세요.
// 조건 : i의 값을 직접 바꾸는 것은 안됩니다.
// 조건 : `i = 50;` 은 안됩니다.

#include <stdio.h>

int main(void) {

	//exam1()
	int i = 30;

	// 수정가능지역 시작
	int* a = &i;
	*a = 50;


	// 수정가능지역 끝

	printf("i : %d\n", i);
	// 출력 => i : 50


	//아래 각 문제 실행 시 주석해제

	//exam2();
	//exam3();
	//exam4();
	//exam5();
	exam6();

	return 0;
}