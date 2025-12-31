#include <stdio.h>

int main() {
    int* p;  //int형 포인터 p
    int *p, q, r;  //int형 포인터 p, int형 변수 q, r

    return 0;
}

/*
포인터를 정의할 때
int* p; 꼴로 정의한다면 실수할 가능성이 매우 커짐. 왜냐하면
int *p, q, r; 에서 p만 포인터이고 나머지는 평범한 변수가됨
앞으로 int *p; 꼴로 포인터를 선언
*/