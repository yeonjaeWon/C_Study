#include <stdio.h>
#include <stdlib.h>

int* makeArr() {

	//int arr[3]; // ��������(�����Ҵ�) -> �ý����� �ǵ��� �ʵ��� �����Ҵ�
	int* arr = malloc(12); // 12����Ʈ�� ���� �ּҸ� ����

	arr[0] = 100;
	arr[1] = 200;
	arr[2] = 300;

	return arr;
}

int exam13() {

	int* arr = makeArr();
	printf("arr[0] : %d\n", arr[0]); // ��� : 100
	//printf("arr[0] : %d\n", *(arr + 0)); // ��� : 100
	printf("arr[1] : %d\n", arr[1]); // ��� : 200
	printf("arr[2] : %d\n", arr[2]); // ��� : 300

	free(arr); // ����


	return 0;
}