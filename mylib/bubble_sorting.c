#include <stdio.h>
#include "bubble_sorting.h"

void bubble_sort(int a[], int l) {

    int i, j, s;

    for (i = 0; i < l - 1; i++) {

        for (j = 0; j < l - 1 - i; j++) {

            if (a[j] > a[j + 1]) {
                s = a[j];
                a[j] = a[j + 1];
                a[j + 1] = s;
            }
        }
    }
    for (i = 0; i < l ; i++) {
        printf("%d ", a[i]);
    }
}
