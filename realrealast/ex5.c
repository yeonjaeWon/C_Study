// ���� : �������� �Ѽ��ϴ� change �Լ��� ������ּ���.

#include <stdio.h>

// ���� �Լ� �ϼ�
void change(int* a) {
	int* px = a;
	*px = 25;
}


int exam5(void) {

	int x = 20;
	//printf("x�� �ּҰ� : %ld\n", (long)&x);

	printf("change �Լ� ȣ���ϱ� ���� x : %d\n", x);


	change(&x); //�̺κи� ���� ����


	printf("change �Լ� ȣ���� ���� x : %d\n", x);
	// ��� => change �Լ� ȣ���� ���� x : 50

	return 0;
}