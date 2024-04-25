#include <stdio.h>
void swapByValue(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("Inside swapByValue function:\n");
    printf("After swapping: a = %d, b = %d\n", a, b);
}
void swapByReference(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    printf("Inside swapByReference function:\n");
    printf("After swapping: a = %d, b = %d\n", *a, *b);
}
int main() {
    int x = 5, y = 10;
    printf("Before swapping: x = %d, y = %d\n", x, y);
    swapByValue(x, y);
    printf("After calling swapByValue function:\n");
    printf("x = %d, y = %d\n", x, y);
    swapByReference(&x, &y);
    printf("After calling swapByReference function:\n");
    printf("x = %d, y = %d\n", x, y);

    return 0;
}