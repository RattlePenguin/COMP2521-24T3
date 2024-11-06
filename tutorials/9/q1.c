#include <stdio.h>

#define HASHSIZE 10

int hash(char *key, int N) {
	int h = 0;
	char *c;
	for (c = key; *c != '\0'; c++) {
        // printf("%c = %d\n", *c, *c);
		h = h + *c;
	}
	return h % N;
}

int main(void) {
    printf("%d\n\n", hash("hello", HASHSIZE));
    printf("%d\n\n", hash("world", HASHSIZE));
    printf("%d\n\n", hash("helloo", HASHSIZE));
    
    return 0;
}
