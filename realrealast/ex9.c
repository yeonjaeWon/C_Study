#include <stdio.h>

int exam9() {

    char p[5] = { 10, 20, 30, 40, 50 };

    // 1. [] ����
    char *arr = p;

    // 2. ������ ���� - []���� �ʰ�

    // ��� :
    for (int i = 0; i<(sizeof(p)/sizeof(char)); i++)
    {
        printf(" %d\n", *(arr+i));
    }
    
    return 0;
}