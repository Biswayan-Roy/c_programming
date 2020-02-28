#include <stdio.h>
#include "../mylib/selection_sort.h"

void selection_sort(int a[],int l){

    int i,j,min,k;

    for(i=0 ;i<l-1 ;i++){
        min = i;
        for(j=i+1; j<l ;j++){
            if(a[min]>a[j]){
                min = j;
            }
        }
        k = a[min];
        a[min]=a[i];
        a[i]=k;
    }
    for (i = 0; i < l ; i++) {
        printf("%d ", a[i]);
    }
}