// MULTIPLICATION TABLE:
// 1 2 3 4 5 
// 2 4 6 8 10 
// 3 6 9 12 15 
// 4 8 12 16 20 
// 5 10 15 20 25 

#include <stdio.h>

int main() {

    int i = 1;

    printf("MULTIPLICATION TABLE:\n");

    while (i <= 5) {

        int j = 1;

        while (j <= 5) {
            printf("%d ", i * j);
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}