#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int exam14() {

	// ����ڰ� ���ϴ� ��ŭ ����(int) �����͸� �������ּ���.
	// �޸𸮸� ȿ�������� ������ּ���.
	// �Ʒ��� ���� ������ϸ� �˴ϴ�. ��, �ڵ�� �ѹ� �ۼ��� �� ������ �� �����ϴ�.
	int num;
	printf("������ ���� ���� : ");
	scanf("%d", &num);
	
	int* arr = malloc(sizeof(int) * num);

	for (int i = 0; i < num; i++) {
		scanf("%d", &arr[i]);
	}

	// ex1)
	// ������ ���� ���� : 5

	// 1��° �� : 1
	// 2��° �� : 2
	// 3��° �� : 3
	// 4��° �� : 4
	// 5��° �� : 5

	// ��� : 1 2 3 4 5


	// ex2)
	// ������ ���� ���� : 3

	// 1��° �� : 1
	// 2��° �� : 2
	// 3��° �� : 3

	// ��� : 1 2 3
	printf("��� : ");
	for (int i = 0; i < num; i++) {
		printf(" %d ", arr[i]);
	}

	free(arr);

	return 0;
}