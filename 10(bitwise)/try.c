#include <stdio.h>

int main() {
    int a = 25, b = 12;

    printf("The ans for AND: %d\n", a&b);
    printf("The ans for OR: %d\n", a|b);
    printf("The ans for XOR: %d\n", a^b);
    printf("The ans for NOT: %d", ~a);

    return 0;
}