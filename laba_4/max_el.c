//Find the maximum value among the elements of an array
#include <stdio.h>

void input(int n, int a[]) {
    int inp;
    for(int i = 0; i < n; i++) {
        printf("Enter the% dth element of the array: ", i+1);
        scanf("%d", &inp);
        a[i] = inp;
    }
}

void print(int n, int a[]) {
    printf("Array elements: ");
    for(int i = 0; i < n; i++) {
        printf(i == n-1 ? "%d" : "%d, ", a[i]);
    }
}

void findMax(int n, int a[], int *max) {
    *max = a[0];
    for(int i = 1; i < n; i++) *max = a[i] > *max ? a[i] : *max;
    printf("\nMaximum array element: %d\n", *max);
}

void create(int *n) {
    int inp;
    printf("Enter the number of array elements: ");
    scanf("%d", &inp);
    *n = inp;
}

void main() {
    int n, max;

    create(&n);

    int arr[n];

    input(n, arr);
    findMax(n, arr, &max);
    print(n, arr);
}
