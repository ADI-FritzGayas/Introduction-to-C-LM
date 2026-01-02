// Foor loop output:
// iteration 1
// iteration 2
// iteration 3
// iteration 4
// iteration 5

#include <stdio.h>

int main() {
    int n = 5;
    int i;

    printf("For loop output:\n");

    // start of the loop
    for (i = 0; i <= n; i++)
        printf("iteration %d\n", i);
    return 0;
}