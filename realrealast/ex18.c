// 문제 : 사람의 나이를 저장해주세요.

// 입출력예시
/*

사람의 숫자를 입력해주세요. : 2[엔터]
1번째 사람의 나이를 입력해주세요 : 33[엔터]
1번째 사람의 이름을 입력해주세요 : aaa[엔터]
2번째 사람의 나이를 입력해주세요 : 50[엔터]
2번째 사람의 이름을 입력해주세요 : bbb[엔터]

1번째 사람의 나이, 이름 : 33, aaa
2번째 사람의 나이, 이름 : 50, bbb

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
	printf("사람의 숫자를 입력해주세요. : ");
	scanf("%d", &num);

	Saram* ingan = malloc(sizeof(Saram) * num);
	
	for (int i = 0; i < num; i++) {
		printf("%d 번째 사람의 나이를 입력해주세요. : ", (i + 1));
		scanf("%d", &ingan[i].age);
		printf("%d 번째 사람의 이름을 입력해주세요. : ", (i + 1));
		scanf("%s", &ingan[i].name);
	}

	for (int i = 0; i < num; i++) {
		printf("%d 번째 사람의 나이 : %d \n", (i + 1), ingan[i].age);
		printf("%d 번째 사람의 이름 : %s \n", (i + 1), ingan[i].name);
	}


	return 0;
}