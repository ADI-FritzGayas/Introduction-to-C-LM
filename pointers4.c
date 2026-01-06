// Null pointer
#include <stdio.h>

int main()
{
    int x = 10;
    int *p_1 = NULL;
    int *p_2;

    //Address stored in pointer variable
    printf("p_1 = %x\n",p_1);
    printf("p_2 = %x\n",p_2);

    p_2 = &x;

    //Address stored in pointer variable
    printf("p_1 = %x\n",p_1);
    printf("p_2 = %x\n",p_2);    
    
    return 0;
}
