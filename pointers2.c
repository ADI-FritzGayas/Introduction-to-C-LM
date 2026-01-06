// Pointers and arrays
#include <stdio.h>

int main()
{
   int x[] = {1,2,3,4,5};
   int *p;
   int res = 0;

    res = x[1];
    printf("res = %d\n", res);

    res = *(x+1);
    printf("res = %d\n", res);

  	 p = &x[0]; 
    printf("*p = %d\n", *p);
    printf("*(p+1)= %d\n", *(p+1));

    p = &x[2];
    printf("*p = %d\n", *p);
    printf("*(p+1)= %d\n", *(p+1));

    return 0;
}