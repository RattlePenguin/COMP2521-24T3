#include <stdio.h>
#include <stdlib.h>

#define HASHSIZE 11

int hash(int n) {
    return n % HASHSIZE;
}

int *twoSum(int arr[], int size, int target) {
    int *result = malloc(sizeof(int) * 2);

    // Create our hash table. 0 means empty.
    int dict[HASHSIZE] = {0};

    for (int i = 0; i < size; ++i) {
        int value = arr[i];
        int key = hash(value);

        int complement = target - value;
        int complementKey = hash(complement);

        if (dict[complementKey] != 0) {
            result[0] = i;
            result[1] = dict[complementKey];
            break;
        } else {
            dict[key] = i;
        }
    }

    return result;
}

int main(void) {
    int target = 20;
    int size = 4;
    int arr[] = {7, 9, 11, 15};

    int *result = twoSum(arr, size, target);
    printf("[%d, %d]\n", result[0], result[1]);

    free(result);
    return 0;
}
