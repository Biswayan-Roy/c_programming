#include <stdio.h>
#include "../mylib/sort.h"

int main(void) {
    // test git2
    printf("Hello, World!\n");
    int a[] = {1, 2, 3};

    bubble_sort(a, 3);

    for (int i = 0; i <= 5; i++) {
        printf("\n %d", i);
    }
    return 0;
}