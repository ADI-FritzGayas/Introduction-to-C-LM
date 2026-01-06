// Function Pointers
// Function pointers can be passed as an argument and can also be returned from a function.
#include <stdio.h>

int square_area(int side); // Function 1
int square_perimeter(int side); // Function 2
void display_result(int (*p)(int)); // Function 3


int main()
{
    display_result(square_area);
    display_result(square_perimeter);
    return 0;
}

int square_area(int side)
{
    return (side*side);
}

int square_perimeter(int side)
{
    return (4*side);
}

void display_result(int (*p)(int))
{
    int result = 0;
    result = p(5);
    printf("Result is = %d\n",result);
}
