// �Ʒ� �������� ������(�ּҰ�)�� �����ͺ����� �����ϰ�
// ������ ������ �̿��� ������ ���� �����ϰ� ������ּ���.

#include <stdio.h>

int exam4() {

	int a;

	int b;

	char c;

	long long d;

	float e;

	double f;

	unsigned int g;

	unsigned char h;

	short i;

	// ���� ���� ���� ����
	int* pa = &a;
	*pa = 10000000;

	int* pb = &b;
	*pb = 20000000;

	char* pc = &c;
	*pc = 50;

	long long* pd = &d;
	*pd = 30000000000;

	float* pe = &e;
	*pe = 3.15;

	double* pf = &f;
	*pf = 10.3;

	unsigned int* pg = &g;
	*pg = 3000000000;

	unsigned char* ph = &h;
	*ph = 180;

	short* pi = &i;
	*pi = 500;

	// ���� ���� ���� ��

	printf("%d \n", a);  //��� : 100000000
	printf("%d \n", b);  //��� : 200000000
	printf("%d \n", c);  //��� : 50
	printf("%lld\n", d); //��� : 30000000000
	printf("%f \n", e);  //��� : 3.150000
	printf("%lf\n", f); //��� : 10.300000
	printf("%u \n", g);  //��� : 3000000000
	printf("%d \n", h);  //��� : 180
	printf("%d \n", i);  //��� : 500


	return 0;
}