// 문제 : int 없이, int*와 malloc을 사용해서 함수를 다시 만들어주세요.
// 조건 : 변수를 오직 1개만 사용할 수 있습니다.

#include <stdio.h>
#include <stdlib.h>

void print_99dan() {
    int* gugu = malloc(sizeof(int) * 2);

    for (gugu[0] = 2; gugu[0] <= 9; gugu[0]++) {
        printf("== %d단 ==\n", gugu[0]);
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