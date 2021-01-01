#include <stdio.h>

int main() {
    int age;
    printf("Enter your age: ");
    scanf( "%d", &age);

    if ( age >= 18) {
        printf("You are eligible");
    } else {
        printf("Sorry grow up");
    } 
    
    return 0;
}