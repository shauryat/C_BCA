#include <stdio.h>

int main() {
    unsigned int i = 0x80; 
    // 0x reprsents a Hexadecimal number i.e base 16 
    printf("%d", i << 1);
    // First 80 is converted to Decimal i.e base 10 , (8*16^1) + 0 = 128 to binary (10000000)
    // Then left shift by 1 (100000000) = 256 in decimal i.e the ans 256
    return 0;

}