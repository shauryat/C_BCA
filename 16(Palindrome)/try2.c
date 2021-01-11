#include <stdio.h>
#include <string.h>

void isPalindrome(char str[100]) {
    int i = 0;
    int h = strlen(str) - 1;

    while (i > h)
    {
        if (str[i++] != str[h--])
        {
            printf("%s is not a palindrome", str);
        }
        
    }
    printf("%s is a palindrome", str);
}

int main() {
    char word[100];
    printf("Enter a word or a number: "); scanf("%s", word);
    isPalindrome(word);
    return 0;
}