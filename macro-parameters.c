#include <stdio.h>

//Macro with parameter
#define AREA(a, b) (a * b)

int main() {
    printf("Macro with arguments example\n");
    int a = 10, b = 5;

    // Finding area above using macro
    printf("Area of rectangle is: %d", AREA(a,b));
    return 0;
}