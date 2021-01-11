#include <stdio.h>

int main() {
    int num;

    printf("Enter a Number: ");scanf("%d", &num);

    if (num <= 1) 
       return ("%d is not a prime number");

    if (num == 2)
       return("%d is a prime number");
    
    if(num%2 == 0)
      return("%d is not a prime number");
    
        
    
        
    
}