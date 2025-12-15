/*
stdio.h : STandart Input Output header의 약자로, 표준 입출력 헤더임
이 파일에는 화면에 출력, 키보드로부터 입력을 받아들이는 것을 담당함
*/
#include <stdio.h>  // stdio.h 파일을 포함

/*
main 함수의 앞부분인 int는 integer(정수)의 약자임
*/
int main() {  // 정수형을 반환하는 메인 함수
    printf("Hello world");
    return 0;  // 0을 반환함. 컴퓨터에게 프로그램이 무사히 종료되었음을 알림. 만약 1을 반환한다면 프로그램이 무사히 종료되지 않음.
}