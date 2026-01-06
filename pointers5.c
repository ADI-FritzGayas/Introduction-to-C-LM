// Void pointer
#include <stdio.h>

int main()
{
    int x = 10;
    float y = 12.34;
    void *ptr;

    ptr = &x;
    printf("int x = %d\n", *((int*)ptr));
    ptr = &y;
    printf("float y = %f\n", *((float*)ptr));    
   
    return 0;
}
