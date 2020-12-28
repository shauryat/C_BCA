#include <stdio.h>

int main() {
    int a = 10 , b = 4 , c= 10, d = 20 ;

    // AND 
    if ( a > b && c == d) {
        printf("a is greater than b AND c is equal to d\n");
    } else {
        printf("one the statements is false or both are false\n");
    }
    
    // OR
    if ( a > b || c == d) {
        printf("a is greater than b OR c is equal to d\n");
    } else {
        printf("both are false\n");
    }

    // NOT
    if (!a) {
       printf("a is zero\n");
    } else {
       printf("a is not zero");
    }

    return 0 ;
}