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
		printf("�ּҷ��� ����ֽ��ϴ�. �ּҷ��� ���� �������ּ���.\n");
		return;
	}

	Person* target = head->next;
	for (int i = 0;; i++) {

		printf("%d ��° ����� ����, �̸�, �ּ� : %d, %s, %s\n", (i+1), target->age, target->name, target->adress);
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

//index �� ���� ����
void remove_by_index(Person* head, int index) {

	Person* before = head; // ���� ����� ���� ���
	Person* after = NULL; // ���� ����� ���� ���

	Person* target = head->next;

	for (int i = 0; i < index; i++) {

		if (target == NULL) {
			break;
		}
		before = target;
		target = target->next;
	}

	after = target->next;

	// ���� ��,�� ��峢�� ����
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

	// ����
	/*
	�޴��� �������ּ���(1. �ּҷ� �߰�, 2. �ּҷ� ��ȸ, 3. ���α׷� ����) : 1
	���̸� �Է����ּ��� : 20[����]
	�̸��� �Է����ּ��� : ȫ�浿[����]
	�ּҸ� �Է����ּ��� : ����[����]
	�ּҷ��� �߰��Ǿ����ϴ�.

	�޴��� �������ּ���(1. �ּҷ� �߰�, 2. �ּҷ� ��ȸ, 3. ���α׷� ����) : 2
	== ��ü ȸ�� ����Ʈ ==
	1��° ����� ����, �̸� : 20, ȫ�浿, ����

	�޴��� �������ּ���(1. �ּҷ� �߰�, 2. �ּҷ� ��ȸ, 3. ���α׷� ����) : 1
	���̸� �Է����ּ��� : 50[����]
	�̸��� �Է����ּ��� : �Ӳ���[����]
	�ּҸ� �Է����ּ��� : ���[����]
	�ּҷ��� �߰��Ǿ����ϴ�.

	�޴��� �������ּ���(1. �ּҷ� �߰�, 2. �ּҷ� ��ȸ, 3. ���α׷� ����) : 1
	���̸� �Է����ּ��� : 23[����]
	�̸��� �Է����ּ��� : Ȳ����[����]
	�ּҸ� �Է����ּ��� : ����[����]
	�ּҷ��� �߰��Ǿ����ϴ�.

	�޴��� �������ּ���(1. �ּҷ� �߰�, 2. �ּҷ� ��ȸ, 3. ���α׷� ����) : 2
	== ��ü ȸ�� ����Ʈ ==
	1��° ����� ����, �̸� : 20, ȫ�浿, ����
	2��° ����� ����, �̸� : 50, �Ӳ���, ���
	3��° ����� ����, �̸� : 23, Ȳ����, ����

	�޴��� �������ּ���(1. �ּҷ� �߰�, 2. �ּҷ� ��ȸ, 3. ���α׷� ����, 4. �ּҷ� ����) : 3
	���α׷��� �����մϴ�.
	*/
	Person* head = create_node(0, "", "");

	int menu = 0;

	for (int i = 0; ; ++i) {
		printf("�޴��� �������ּ���(1. �ּҷ� �߰�, 2. �ּҷ� ��ȸ, 3. ���α׷� ����, 4. �ε����� �ּҷ� ����) : ");
		scanf("%d", &menu);

		if (menu == 1) {
			int ag;
			char nam[20];
			char adres[50];
			printf("���̸� �Է����ּ��� :");
			scanf("%d", &ag);
			printf("�̸��� �Է����ּ��� :");
			scanf("%s", nam);
			printf("�ּҸ� �Է����ּ��� :");
			scanf("%s", adres);
			add_value(head, ag, nam, adres);
			printf("�ּҷ� �߰�\n");
			// ���� ����
		}
		else if (menu == 2) {
			print_linked_list(head);
			printf("�ּҷ� ��ȸ\n");
			// ���� ����
		}
		else if (menu == 3) {

			printf("���α׷� �����մϴ�.\n");
			break;
		}
		else if (menu == 4) {
			int num;
			printf("�ּҷ� �����ϰ����ϴ� ��ȣ�� �Է����ּ��� :");
			scanf("%d", &num);
			remove_by_index(head, (num-1));
			printf("�����Ǿ����ϴ�.\n");
		}
		else {
			printf("�� �� ���� ����Դϴ�.\n");
		}
	}


	return 0;
}