// ���� : ���� ��ü�ϴ� change �Լ��� ������ּ���.

#include <stdio.h>

// ======= change ���� ========
void change1(int* aa, int* bb) {
	int temp = *aa;
	*aa = *bb;
	*bb = temp;
}

int exam6() {

	int a = 10;
	int b = 20;

	printf("change �Լ� ȣ���ϱ� ���� a : %d, b :%d\n", a, b);

	change1(&a, &b); // �̺κ� ���� ����

	printf("change �Լ� ȣ���� ���� a : %d, b :%d\n", a, b);
	// ��� => change �Լ� ȣ���� ���� a : 20, b : 10

	return 0;
}