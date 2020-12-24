#include<stdio.h>

int main() {
    int year, period ;
    float amount, inrate , value ;

    printf("Put in amount, interest rate , period \n \n");
    scanf("%f %f %d" , &amount , &inrate , &period);
    printf("\n");

    year = 1;

    while (year <= period)
    {
        value = amount + ( amount * inrate);
        printf("%2d Rs %8.2f\n", year , value);
        amount = value;
        year++;
    }
    return 0;
}