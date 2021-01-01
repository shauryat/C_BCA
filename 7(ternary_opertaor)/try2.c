#include <stdio.h>

int main() {
    int num1 , num2;
    printf("Enter The First Number: "); scanf("%d", &num1);
    printf("Enter The Second Number: "); scanf("%d", &num2);

    num1 == num2 ? (
     printf("Both are equal")
    ) : (
    num1 > num2 ? ( printf("First Number is greater") ) : ( printf("Second Number is greater") )  
    );

    return 0;
}