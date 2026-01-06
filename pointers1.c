#include <stdio.h>
#include <stdlib.h>

int main()
{
	int myvar = 10;
	int *foo;
	int baz = 0;

	foo = &myvar;
	printf("myvar = %d\n", myvar);
	printf("baz = %d\n", baz);

	myvar = 15;
	baz = *foo;
	printf("myvar = %d\n", myvar);
	printf("baz = %d\n", baz);

	*foo = 20;
	printf("myvar = %d\n", myvar);
	printf("baz = %d\n", baz);

	return 0;
}
