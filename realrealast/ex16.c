#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int exam16() {

	/*
	주어진 names배열에
	다음과 같이 사람 이름을 5개 저장해주는 프로그램을 만들어주세요.

	1번째 사람의 이름을 입력해주세요 : aaa[엔터]
	2번째 사람의 이름을 입력해주세요 : bbb[엔터]
	3번째 사람의 이름을 입력해주세요 : ccc[엔터]
	4번째 사람의 이름을 입력해주세요 : ddd[엔터]
	5번째 사람의 이름을 입력해주세요 : eee[엔터]

	1번째 사람의 이름 : aaa
	2번째 사람의 이름 : bbb
	3번째 사람의 이름 : ccc
	4번째 사람의 이름 : ddd
	5번째 사람의 이름 : eee

	*/
	char names[100];

	for (int i = 0; i < 100; i += 20) {
		scanf("%s", &names[i]); 
	}

	for (int i = 0; i < 100; i += 20) {
		printf("%s ", &names[i]);
	}

	return 0;
}