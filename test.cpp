#include <stdio.h>

int main() {
    int a[] = {33, 39, 142, 132, 137, 138, 140, 154, 344, 414, 402};
    int n = sizeof(a)/sizeof(a[0]);
    int i, j, temp, swapped;

    printf("Start: ");
    for (i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");

    for (i = 0; i < n - 1; i++) {
        swapped = 0;
        for (j = 0; j < n - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j]; a[j] = a[j + 1]; a[j + 1] = temp;
                swapped = 1;
            }
        }
        printf("Pass %d: ", i + 1);
        for (int k = 0; k < n; k++) printf("%d ", a[k]);
        printf("\n");
        if (!swapped) break; 
    }

    
    printf("\n\n\n");
    return 0;
}