// ���� : ���� c�� ���� �������ּ���.
// ���� : c�� ���� ���� �ٲٴ� ���� �ȵ˴ϴ�.
// ���� : `c = 220;` �� �ȵ˴ϴ�.

#include <stdio.h>

int exam2(void) {

	unsigned char c = 200;

	// ���� ���� ���� ����
	unsigned char* a = &c;
	*a = 220;

	// ���� ���� ���� ��

	printf("c : %d\n", c);
	//��� => c : 220

	return 0;
}