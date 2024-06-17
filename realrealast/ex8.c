// p로 a,b,c,d,e를 모두 출력해주세요.

#include <stdio.h>

int exam8() {

    char e = 50;
    char d = 40;
    char c = 30;
    char b = 20;
    char a = 10;

    printf("a의 주소 : %lld\n", (long long)&a);
    printf("b의 주소 : %lld\n", (long long)&b);
    printf("c의 주소 : %lld\n", (long long)&c);
    printf("d의 주소 : %lld\n", (long long)&d);
    printf("e의 주소 : %lld\n", (long long)&e);

    char* p = &a;
    printf("p의 값   : %lld\n", (long long)p);

    // 수정 시작
    printf("a의 값 : %d\n", *p);
    printf("b의 값 : %d\n", *(p-32));
    printf("c의 값 : %d\n", *(p-32*2));
    printf("d의 값 : %d\n", *(p-32*3));
    printf("e의 값 : %d\n", *(p-32*4));
    // 수정 끝


        // 출력 :
        /*
       10
       20
       30
       40
       50
    */


    return 0;
}