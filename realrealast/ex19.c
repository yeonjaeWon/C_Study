#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int exam19() {

	short a = 10;
	short b = 20;

	printf("a의 주소 : %ld\n", (long)&a);
	printf("b의 주소 : %ld\n", (long)&b);

	short* ptr = &a;
	short** ptr2 = &ptr;

	printf("ptr : %ld\n", (long)ptr);
	printf("ptr2 : %ld\n", (long)ptr2);

	//1. ptr을 이용해서 b의 값을 50으로 수정해주세요.
	printf("a : %d\n", a); // 출력 : 10
	*(ptr + 16) = 50;
	printf("b : %d\n", b); // 출력 : 50

	//2. ptr2를 이용해서 b의 값을 100으로 수정해주세요.
	printf("a : %d\n", a); // 출력 : 10
	*(*ptr2 + 16) = 100;
	printf("b : %d\n", b); // 출력 : 100



	return 0;
}