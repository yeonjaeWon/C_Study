// ���� : ����� ���̸� �������ּ���.

// ����¿���
/*

����� ���ڸ� �Է����ּ���. : 2[����]
1��° ����� ���̸� �Է����ּ��� : 33[����]
1��° ����� �̸��� �Է����ּ��� : aaa[����]
2��° ����� ���̸� �Է����ּ��� : 50[����]
2��° ����� �̸��� �Է����ּ��� : bbb[����]

1��° ����� ����, �̸� : 33, aaa
2��° ����� ����, �̸� : 50, bbb

*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
typedef struct _saram {
	int age;
	char name[30];
} Saram;

int exam18(void) {
	int num;
	printf("����� ���ڸ� �Է����ּ���. : ");
	scanf("%d", &num);

	Saram* ingan = malloc(sizeof(Saram) * num);
	
	for (int i = 0; i < num; i++) {
		printf("%d ��° ����� ���̸� �Է����ּ���. : ", (i + 1));
		scanf("%d", &ingan[i].age);
		printf("%d ��° ����� �̸��� �Է����ּ���. : ", (i + 1));
		scanf("%s", &ingan[i].name);
	}

	for (int i = 0; i < num; i++) {
		printf("%d ��° ����� ���� : %d \n", (i + 1), ingan[i].age);
		printf("%d ��° ����� �̸� : %s \n", (i + 1), ingan[i].name);
	}


	return 0;
}