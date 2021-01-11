#include <stdio.h>

int main() {
    int num,rem,rev =0;
    printf("Enter the Number: "); scanf("%d", &num);
    int n = num;
    while(n!=0) 
    {
         rem = n % 10;
         printf("\nRemainder: %d",rem );
         rev = rev * 10 + rem;
         printf("\nCurrentReverse: %d",rev );
         n /= 10;
         printf("\nCurrentNumber: %d", n);
    }

    if(num==rev){
        printf("\nit is a palindrome");
    } else {
        printf("\nit is not a palindrome");
    }
    return 0;
}