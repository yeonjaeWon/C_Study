// ���� : int ����, int*�� malloc�� ����ؼ� �Լ��� �ٽ� ������ּ���.
// ���� : ������ ���� 1���� ����� �� �ֽ��ϴ�.

#include <stdio.h>
#include <stdlib.h>

void print_99dan() {
    int* gugu = malloc(sizeof(int) * 2);

    for (gugu[0] = 2; gugu[0] <= 9; gugu[0]++) {
        printf("== %d�� ==\n", gugu[0]);
        for (gugu[1] = 1; gugu[1] <= 9; gugu[1]++) {
            printf("%d * %d = %d\n", gugu[0], gugu[1], gugu[0] * gugu[1]);
        }
    }

    free(gugu);
    
}

int exam15() {

    print_99dan();

    return 0;
}