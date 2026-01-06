// function pointers
#include <stdio.h>  

int square_area(int side); // Function 1
int square_perimeter(int side); // Function 2


int main()
{
 int result=0;
    int (*p_func)(int);

    p_func = square_area;
    result = p_func(5);
    printf("Area = %d\n", result);

    p_func = square_perimeter;
    result = p_func(5);
    printf("Perimeter = %d\n", result);

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
