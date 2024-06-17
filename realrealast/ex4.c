// 아래 변수들의 포인터(주소값)을 포인터변수에 저장하고
// 포인터 변수를 이용해 각각의 값을 저장하고 출력해주세요.

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

	// 수정 가능 지역 시작
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

	// 수정 가능 지역 끝

	printf("%d \n", a);  //출력 : 100000000
	printf("%d \n", b);  //출력 : 200000000
	printf("%d \n", c);  //출력 : 50
	printf("%lld\n", d); //출력 : 30000000000
	printf("%f \n", e);  //출력 : 3.150000
	printf("%lf\n", f); //출력 : 10.300000
	printf("%u \n", g);  //출력 : 3000000000
	printf("%d \n", h);  //출력 : 180
	printf("%d \n", i);  //출력 : 500


	return 0;
}