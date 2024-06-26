#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

typedef struct _person
{
	int age;
	char name[20];
	char adress[50];
	struct _person* next;
} Person;

Person* create_node(int ag, char* nam, char* adres) {
	Person* new_node = (Person*)malloc(sizeof(Person));
	new_node->age = ag;
	strcpy(new_node->name, nam);
	strcpy(new_node->adress, adres);
	new_node->next = NULL;

	return new_node;
};

void print_linked_list(Person* head) {
	if (head->next == NULL) {
		printf("주소록이 비어있습니다. 주소록을 먼저 저장해주세요.\n");
		return;
	}

	Person* target = head->next;
	for (int i = 0;; i++) {

		printf("%d 번째 사람의 나이, 이름, 주소 : %d, %s, %s\n", (i+1), target->age, target->name, target->adress);
		target = target->next;

		if (target == NULL) {
			break;
		}
	}

}

void add_value(Person* head, int ag, char *nam, char *adres) {
	Person* last = head;
	Person* new_node = create_node(ag, nam, adres);

	for (int i = 0; ; i++) {
		if (last->next == NULL) {
			break;
		}
		last = last->next;
	}
	last->next = new_node;
}

//index 를 통해 삭제
void remove_by_index(Person* head, int index) {

	Person* before = head; // 삭제 대상의 이전 노드
	Person* after = NULL; // 삭제 대상의 다음 노드

	Person* target = head->next;

	for (int i = 0; i < index; i++) {

		if (target == NULL) {
			break;
		}
		before = target;
		target = target->next;
	}

	after = target->next;

	// 삭제 전,후 노드끼리 연결
	before->next = after;

	free(target);
	return;

}

void remove_all(Person* head) {
	Person* target = head->next;
	for (int i = 0; ; i++) {
		if (target == NULL) {
			break;
		}

		Person* del_target = target;
		target = target->next;

		free(del_target);
		printf("node[%d] : removed\n", i);
	}
	free(head);
	printf("head : removed\n");
}

int exam21() {

	// 예시
	/*
	메뉴를 선택해주세요(1. 주소록 추가, 2. 주소록 조회, 3. 프로그램 종료) : 1
	나이를 입력해주세요 : 20[엔터]
	이름을 입력해주세요 : 홍길동[엔터]
	주소를 입력해주세요 : 대전[엔터]
	주소록이 추가되었습니다.

	메뉴를 선택해주세요(1. 주소록 추가, 2. 주소록 조회, 3. 프로그램 종료) : 2
	== 전체 회원 리스트 ==
	1번째 사람의 나이, 이름 : 20, 홍길동, 대전

	메뉴를 선택해주세요(1. 주소록 추가, 2. 주소록 조회, 3. 프로그램 종료) : 1
	나이를 입력해주세요 : 50[엔터]
	이름을 입력해주세요 : 임꺽정[엔터]
	주소를 입력해주세요 : 경기[엔터]
	주소록이 추가되었습니다.

	메뉴를 선택해주세요(1. 주소록 추가, 2. 주소록 조회, 3. 프로그램 종료) : 1
	나이를 입력해주세요 : 23[엔터]
	이름을 입력해주세요 : 황진이[엔터]
	주소를 입력해주세요 : 서울[엔터]
	주소록이 추가되었습니다.

	메뉴를 선택해주세요(1. 주소록 추가, 2. 주소록 조회, 3. 프로그램 종료) : 2
	== 전체 회원 리스트 ==
	1번째 사람의 나이, 이름 : 20, 홍길동, 대전
	2번째 사람의 나이, 이름 : 50, 임꺽정, 경기
	3번째 사람의 나이, 이름 : 23, 황진이, 서울

	메뉴를 선택해주세요(1. 주소록 추가, 2. 주소록 조회, 3. 프로그램 종료, 4. 주소록 삭제) : 3
	프로그램을 종료합니다.
	*/
	Person* head = create_node(0, "", "");

	int menu = 0;

	for (int i = 0; ; ++i) {
		printf("메뉴를 선택해주세요(1. 주소록 추가, 2. 주소록 조회, 3. 프로그램 종료, 4. 인덱스로 주소록 삭제) : ");
		scanf("%d", &menu);

		if (menu == 1) {
			int ag;
			char nam[20];
			char adres[50];
			printf("나이를 입력해주세요 :");
			scanf("%d", &ag);
			printf("이름을 입력해주세요 :");
			scanf("%s", nam);
			printf("주소를 입력해주세요 :");
			scanf("%s", adres);
			add_value(head, ag, nam, adres);
			printf("주소록 추가\n");
			// 직접 구현
		}
		else if (menu == 2) {
			print_linked_list(head);
			printf("주소록 조회\n");
			// 직접 구현
		}
		else if (menu == 3) {

			printf("프로그램 종료합니다.\n");
			break;
		}
		else if (menu == 4) {
			int num;
			printf("주소록 삭제하고자하는 번호를 입력해주세요 :");
			scanf("%d", &num);
			remove_by_index(head, (num-1));
			printf("삭제되었습니다.\n");
		}
		else {
			printf("알 수 없는 명령입니다.\n");
		}
	}


	return 0;
}