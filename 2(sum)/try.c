#include <stdio.h>
int main() {
    int number1;
    int number2;
    printf("Enter First Integer: ");
    scanf("%d", &number1);

    printf("Enter Second Integer: ");
    scanf("%d",&number2);

    int sum = number1 + number2;

    printf("%d + %d = %d" , number1 , number2 , sum);

    return 0;
}