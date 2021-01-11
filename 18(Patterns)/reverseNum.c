#include <stdio.h>

// 55555
// 4444
// 333
// 22
// 1

int main() {
    int row;
    printf("Input Rows: "); scanf("%d", &row);
    
    for (int i = row ; i >= 1 ; i-- ) {
        for (int j = 1 ; j <= i ; j++ ) {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}