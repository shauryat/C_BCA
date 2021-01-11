#include <stdio.h>

int main() {
    int quantity; int discount = 0 ;
    float rate; float total;

    printf("Enter quanity: ");
    scanf("%d", &quantity);

    printf("Enter Rate : ");
    scanf("%f", &rate);

    if ( quantity > 1000 ) {
        discount = 10;
        total = (rate * quantity) - (quantity * rate * discount/100);
        printf("The Total is : %f", total);
    } else {
        total = (rate * quantity);
        printf("The Total is : %f", total);
    }
    return 0;
}