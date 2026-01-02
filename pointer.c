#include <stdio.h>

int main() {
    int *ptr1;
    int *ptr2;
    int x=5,y=10;
    ptr1=&x; //Address of x assigned to ptr1<br>
    ptr2=&y; //address of y assigned to ptr2
    
    printf("Value of ptr1 is: %d\n", *ptr1);
    printf("Value of ptr2 is: %d\n", *ptr2);
    printf("Address of variable x is: %p\n",ptr1);
    printf("Address of variable y is: %p\n",ptr2);
    int add=(*ptr1 + *ptr2);
    printf("Addition of x and y using ptr1 and ptr2 is: %d\n",add);

    return 0;
}