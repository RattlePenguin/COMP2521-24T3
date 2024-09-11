#include <stdio.h>

// How can you allocate the array on the heap instead?
int main(void) {
	int a[5];
	for (int i = 0; i < 5; i++) {
		a[i] = 42;
	}
}