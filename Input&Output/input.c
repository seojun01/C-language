#include <stdio.h>

int main() {
    double celsius;  // 섭씨 온도
    
    printf("섭씨 온도를 화씨 온도로 바꿔주는 프로그램\n");
    printf("섭씨 온도 입력 : ");
    scanf("%lf", &celsius);

    printf("섭씨 %f도는 화씨로 %f도.\n", celsius, 9 * celsius / 5 + 32);
    return 0;
}