// ���� : char ���� b�� �̿����� �ʰ� b�� ���� �Ѽ�
// ���� : ������ ������ ����ؼ� ���� �����ؾ� �Ѵ�.
// ���� : �������� �������� b ��� ������ ����ϸ�(����ϸ�) �ȵ˴ϴ�.

#include <stdio.h>

int exam7() {
	char a = 1;
	char b = 5;

	printf("== ������ �ּ� ==\n");
	printf("&a : %lld\n", (long long)&a);
	printf("&b : %lld\n", (long long)&b);

	// ������������ ����
	char* pa = &a;
	*pa = 2;

	char* pb = &a + 32;
	*pb = 10;

	  // ������������ ��]

	printf("&a : %lld\n", (long long)&a);
	printf("&b : %lld\n", (long long)pb);

	printf("== ������ �� ==\n");
	printf("a : %d\n", a);
	// ��� => a : 2
	printf("b : %d\n", b);
	// ��� => b : 10

	return 0;
}