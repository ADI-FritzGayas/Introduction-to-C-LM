// Pointer arithmetic
#include <stdio.h>

int main()
{
  	 int x[] = {2,4,6,8,10};
	   int *p;

    p = &x[0];
    printf("*p++ = %d\n", *p++);
    printf("*p = %d\n", *p);
    
    printf("*++p = %d\n", *++p);
    printf("*p = %d\n", *p);
    
    printf("++(*p) = %d\n", ++(*p));
    printf("*p = %d\n", *p);
    
    printf("(*p)++ = %d\n", (*p)++);
    printf("*p = %d\n", *p);
    
    return 0;
}
