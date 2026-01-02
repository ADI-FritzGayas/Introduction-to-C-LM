#include <stdio.h>

//Macro definition
//There is no semi-colon at the end of the macro definition
#define LIMIT 10

int main() {
    printf("Macro definition example\n");
    for (int i=0; i < LIMIT; i++) {
        printf("Iteration %d\n", i);
    }
    return 0;
}