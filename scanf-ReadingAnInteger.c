#include <stdio.h>

int main() {
    int age;
    char ch;

    // Ask for user input
    printf("Enter your age: ");
    scanf("%d", &age);  

    // Ask for the second user input
    printf("Enter a character: ");
    scanf(" %c", &ch);  // Notice the space before %c

    // Prints the age
    printf("Age is: %d\n", age);

    // Print the character
    printf("Entered character is: %c\n", ch);

    printf("DONE!\n");

    return 0;
}