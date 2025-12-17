#include <stdio.h>

int main() {
    int a;
    int b;

    const int* const pa = &a;
    printf("%p", pa);
    return 0;
}