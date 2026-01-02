// LOOP WITHIN A LOOP:
// 2 4 6 8 10
// 4 8 12 16 20
// 6 12 18 24 30
// 8 16 24 32 40
// 10 20 30 40 50

#include <stdio.h>

int main() {
    int i;
    int j;

    printf("LOOP WITHIN A LOOP:\n");

    // First loop
    for (i = 2; i <= 10; i += 2) {
        // Second loop
        for (j = 1; j <=5 ; j++) {
            printf("%d ", i * j);
        }
        printf("\n");
    }
    return 0;
}