// ���� : �迭�� �Ѽ��ϴ� change �Լ��� ������ּ���.

#include <stdio.h>
// ���⼭ change �Լ��� �������ּ���.
int change2(int* arr) {
	// 1. [] �̿�
	arr[0] = arr[0]*2;
	arr[1] = arr[1]*2;

	// 2. [] �̿� X
	*arr = (*arr) * 2;
	*(arr + 1) = *(arr + 1) * 2;
}


int exam12() {

	int x[2];
	x[0] = 100;
	x[1] = 200;
	//int x[2] = {100, 200}; // �� 3 �� �ڵ��� ���� �ǹ��̴�.

	printf("change �Լ��� ȣ���ϱ� ��, x[0] : %d, x[1] : %d\n", x[0], x[1]);

	printf("x�� ũ�� : %lu\n", sizeof(x));

	// ���⼭ change �Լ��� �������ּ���.
	change2(x);

	printf("change �Լ��� ȣ���� ��, x[0] : %d, x[1] : %d\n", x[0], x[1]);
	// ��� => change �Լ��� ȣ���� ��, x[0] : 200, x[1] : 400

	return 0;
}