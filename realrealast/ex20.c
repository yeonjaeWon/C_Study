// ���� : �迭�� �Ѽ��ϴ� change �Լ��� ������ּ���.(�迭�� ������)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void change3(int** px) {
	// v1. ������ ����
	*(*px + 0) = 200;
	*(*px + 1) = 400;

	/* v2.�迭��������
	px[0][0] = 200;
	px[0][1] = 400;

	// v3. ������ ���� + �迭���� ����
	(*px)[0] = 200;
	(*px)[1] = 400;

	*(px[0] + 0) = 200;
	*(px[0] + 1) = 400;
	*/
	// ������ �� ���� ���ô� ���� �ٸ� ��� Ǯ��
}

int exam20() {
	int x[2] = { 100, 200 };
	// x : �迭����
	// x�� ���� �ڵ����� x[0]�� �ּҰ��� ������.
	// x == &x[0]
	// x�� Ÿ���� int* �̴�.

	printf("change �Լ��� ȣ���ϱ� ��, x[0] : %d, x[1] : %d\n", x[0], x[1]);

	int* p = x;
	printf("%lld\n", &p);
	printf("%lld\n", p);
	printf("%lld\n", x);
	printf("%lld\n", &x[0]);
	printf("%lld\n", &x[1]);
	change3(&p);

	printf("change �Լ��� ȣ���� ��, x[0] : %d, x[1] : %d\n", x[0], x[1]);
	// ��� => change �Լ��� ȣ���ϱ� ��, x[0] : 200, x[1] : 400

	return 0;
}