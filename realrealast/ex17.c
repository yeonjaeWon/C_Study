// ���� : ����� ���̸� �������ּ���.

// ����¿���
/*
����� ���ڸ� �Է����ּ���. : 2[����]

1��° ����� ���̸� �Է����ּ��� : 33[����]
2��° ����� ���̸� �Է����ּ��� : 50[����]
1��° ����� ���� : 33
2��° ����� ���� : 50
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int exam17(void) {
	int num;
	printf("����� ���ڸ� �Է����ּ���. : ");
	scanf("%d", &num);

	int* arr = malloc(sizeof(int) * num);

	for (int i = 0; i < num; i++) {
		printf("%d ��° ����� ���̸� �Է����ּ���. : ", (i+1));
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < num; i++) {
		printf("%d ��° ����� ���� : %d \n", (i+1), arr[i]);
	}

	return 0;
}