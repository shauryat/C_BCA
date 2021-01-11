#include<stdio.h>
// A 
// AB 
// ABC 
// ABDC
 
int main() {
    int n;
 
    printf("Enter the no of lines\n");
    scanf("%d",&n);
 
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=i;j++) {
            printf("%c",(char)(j+64));
        }
        printf("\n");
    }
    return 0;
}