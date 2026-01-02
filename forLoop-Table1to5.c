// Concept is loop with a loop and use variables i, j
// TABLE OF NUMBERS:
// 1 2 3 4 5 
// 2 4 6 8 10 
// 3 6 9 12 15 
// 4 8 12 16 20 
// 5 10 15 20 25 

#include <stdio.h>

int main() {
    int i;
    int j;

    printf("TABLE OF NUMBERS:\n");
    // First loop i
    for (i = 1; i <= 5; i++) {
        // Second loop j
        for (j = 1; j <=5; j++) {
        printf("%d ", i * j);
        }
        printf("\n");
    }
    return 0;
}