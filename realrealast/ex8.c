// p�� a,b,c,d,e�� ��� ������ּ���.

#include <stdio.h>

int exam8() {

    char e = 50;
    char d = 40;
    char c = 30;
    char b = 20;
    char a = 10;

    printf("a�� �ּ� : %lld\n", (long long)&a);
    printf("b�� �ּ� : %lld\n", (long long)&b);
    printf("c�� �ּ� : %lld\n", (long long)&c);
    printf("d�� �ּ� : %lld\n", (long long)&d);
    printf("e�� �ּ� : %lld\n", (long long)&e);

    char* p = &a;
    printf("p�� ��   : %lld\n", (long long)p);

    // ���� ����
    printf("a�� �� : %d\n", *p);
    printf("b�� �� : %d\n", *(p-32));
    printf("c�� �� : %d\n", *(p-32*2));
    printf("d�� �� : %d\n", *(p-32*3));
    printf("e�� �� : %d\n", *(p-32*4));
    // ���� ��


        // ��� :
        /*
       10
       20
       30
       40
       50
    */


    return 0;
}