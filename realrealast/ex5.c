// 문제 : 원본값을 훼손하는 change 함수를 만들어주세요.

#include <stdio.h>

// 여기 함수 완성
void change(int* a) {
	int* px = a;
	*px = 25;
}


int exam5(void) {

	int x = 20;
	//printf("x의 주소값 : %ld\n", (long)&x);

	printf("change 함수 호출하기 전의 x : %d\n", x);


	change(&x); //이부분만 수정 가능


	printf("change 함수 호출한 후의 x : %d\n", x);
	// 출력 => change 함수 호출한 후의 x : 50

	return 0;
}