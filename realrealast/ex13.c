#include <stdio.h>
#include <stdlib.h>

int* makeArr() {

	//int arr[3]; // 지역변수(정적할당) -> 시스템이 건들지 않도록 동적할당
	int* arr = malloc(12); // 12바이트의 시작 주소를 리턴

	arr[0] = 100;
	arr[1] = 200;
	arr[2] = 300;

	return arr;
}

int exam13() {

	int* arr = makeArr();
	printf("arr[0] : %d\n", arr[0]); // 출력 : 100
	//printf("arr[0] : %d\n", *(arr + 0)); // 출력 : 100
	printf("arr[1] : %d\n", arr[1]); // 출력 : 200
	printf("arr[2] : %d\n", arr[2]); // 출력 : 300

	free(arr); // 해제


	return 0;
}