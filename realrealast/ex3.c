// ���� : C�� �ִ� ��� ������Ÿ�Ժ����� ũ�⸦ ������ּ���.

#include <stdio.h>

int exam3() {

	// int : 4
	// char : 1
	int* i;
	char* c;
	short* s;
	long* l;
	float* f;
	double* d;


	// sizeof : ������ �ڷ����� ũ�⸦ ���ϴ� ������
	// sizeof(int) // �Լ��� ����ó�� �ش� �ڷ����� ũ�⸦ ��ȯ

	// ����Ÿ��
	printf("%lu\n", sizeof(char));
	printf("%lu\n", sizeof(c));
	printf("%lu\n", sizeof(*c));
	printf("%lu\n", sizeof(char*));
	printf("%lu\n", sizeof(short));
	printf("%lu\n", sizeof(s));
	printf("%lu\n", sizeof(*s));
	printf("%lu\n", sizeof(short*));
	printf("%lu\n", sizeof(int));
	printf("%lu\n", sizeof(i));
	printf("%lu\n", sizeof(*i));
	printf("%lu\n", sizeof(int*));
	printf("%lu\n", sizeof(long));

	// �Ǽ�Ÿ��
	printf("%lu\n", sizeof(float));
	printf("%lu\n", sizeof(double));

	// �ּ�Ÿ��
	printf("%lu\n", sizeof(int*));


	return 0;
}