/* Simulate the following: 
Initial value: 10
Updated value: 25
After adding 5: 30 */

#include <stdio.h>

int main() {

    // print initial value
    int number = 10;
    printf("Initial value: %d\n", number);

    // print updated value
    number = 25;
    printf("Updated value: %d\n", number);

    // print value after adding 5
    number = number + 5;
    printf("After adding 5: %d\n", number);

    return 0;
}