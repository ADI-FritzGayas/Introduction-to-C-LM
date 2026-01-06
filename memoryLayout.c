#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a; //goes to stack
    int *ptr;

    a = 4;

    ptr = (int *)malloc(100*sizeof(int));
    free(ptr);
    
    return 0;

}