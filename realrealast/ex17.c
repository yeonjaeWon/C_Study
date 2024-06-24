// 문제 : 사람의 나이를 저장해주세요.

// 입출력예시
/*
사람의 숫자를 입력해주세요. : 2[엔터]

1번째 사람의 나이를 입력해주세요 : 33[엔터]
2번째 사람의 나이를 입력해주세요 : 50[엔터]
1번째 사람의 나이 : 33
2번째 사람의 나이 : 50
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int exam17(void) {
	int num;
	printf("사람의 숫자를 입력해주세요. : ");
	scanf("%d", &num);

	int* arr = malloc(sizeof(int) * num);

	for (int i = 0; i < num; i++) {
		printf("%d 번째 사람의 나이를 입력해주세요. : ", (i+1));
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < num; i++) {
		printf("%d 번째 사람의 나이 : %d \n", (i+1), arr[i]);
	}

	return 0;
}