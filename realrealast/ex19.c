#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int exam19() {

	short a = 10;
	short b = 20;

	printf("a�� �ּ� : %ld\n", (long)&a);
	printf("b�� �ּ� : %ld\n", (long)&b);

	short* ptr = &a;
	short** ptr2 = &ptr;

	printf("ptr : %ld\n", (long)ptr);
	printf("ptr2 : %ld\n", (long)ptr2);

	//1. ptr�� �̿��ؼ� b�� ���� 50���� �������ּ���.
	printf("a : %d\n", a); // ��� : 10
	*(ptr + 16) = 50;
	printf("b : %d\n", b); // ��� : 50

	//2. ptr2�� �̿��ؼ� b�� ���� 100���� �������ּ���.
	printf("a : %d\n", a); // ��� : 10
	*(*ptr2 + 16) = 100;
	printf("b : %d\n", b); // ��� : 100



	return 0;
}