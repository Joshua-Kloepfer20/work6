#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int arr1[10];
    arr1[0] = 0;
    srand(time(NULL));
    int i;
    printf("arr1[0]: 0\t");
    for (i = 1; i < 10; i++) {
        int x = rand();
        arr1[i] = x;
        printf("arr1[%d]: %d\t", i, arr1[i]);
    }
    printf("\n");
    int arr2[10];
    int *p1 = arr1;
    int *p2 = arr2;
    for (i = 0; i < 10; i++) {
        p2[i] = p1[9 - i];
        printf("arr2[%d]: %d\t", i, arr2[i]);
    }
    printf("\n");
}