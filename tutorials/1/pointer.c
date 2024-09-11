#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a = 5;
	int b = 123;

	int *pa = &a;
	int *pb = &b;

	// printf("a = %d, b = %d\n", a, b);

	*pa = 6;
	*pb = 234;

	// printf("a = %d, b = %d\n", a, b);

	int c = *pa;
	*pa = *pb;
	*pb = c;

	// printf("a = %d, b = %d, c = %d\n", a, b, c);
	
	pa = pb;
	*pa = 345;

	// printf("a = %d, b = %d, c = %d\n", a, b, c);
	
	return 0;
}
