#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n) {
    int *memo = calloc(n + 1, sizeof(int));
    memo[0] = 0;
    memo[1] = 1;

    if (n <= 1) {
        return n;
    }

    for (int i = 2; i <= n; ++i) {
        memo[i] = memo[i - 1] + memo[i - 2];
    }

    return memo[n];
}

int main(void) {
    printf("%d\n", fibonacci(2));
    printf("%d\n", fibonacci(5));
    printf("%d\n", fibonacci(10));
    printf("%d\n", fibonacci(21));
    printf("%d\n", fibonacci(42));

    return 0;
}