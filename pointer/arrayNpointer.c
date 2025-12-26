#include <stdio.h>

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int* parr;
    int i;
    parr = &arr[0];

    for (i = 0; i < 10; i++) {
        printf("arr[%d]의 주소값 : %p ", i, &arr[i]);
        printf("(parr + %d)의 값 : %p ", i, (parr + i));

        if(&arr[i] == (parr + i)) {
            printf(" --> 일치 \n");
        } else {
            printf(" --> 불일치 \n");
        }
    }
    return 0;
}

/*
배열의 이름의 비밀
배열의 이름이 배열의 첫 번째 원소를 가리키는 포인터라고 할 수 없음

[] 연산자의 역할
컴퓨터는 C에서 []라는 연산자가 쓰이면 자동적으로 형태가 바뀌어서 처리됨
즉, arr[3]이라 사용한 것은 사실 *(arr+3)으로 바뀌어서 처리가 된다는 뜻임
그리고 arr은 + 연산자와 사용되기 때문에 첫 번째 원소를 가리키는 포인터로 변환 되어서 arr + 3이 포인터 덧셈을 수행하게 됨
*/