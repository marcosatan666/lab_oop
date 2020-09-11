//Заменить значения элементов массива на противоположные

#include <stdio.h>

void input(int n, int a[]) {
    int inp;
    for(int i = 0; i < n; i++) {
        printf("Enter %d number of array: ", i+1);
        scanf("%d", &inp);
        a[i] = inp;
    }
}

void print(int n, int a[]) {
    printf("Array numbers: ");
    for(int i = 0; i < n; i++) {
        printf(i == n-1 ? "%d" : "%d, ", a[i]);
    }
}

void MinusPlus(int n, int a[]) {
    for(int i = 0; i < n; i++) a[i]*=-1;
}

void create(int *n) {
    int inp;
    printf("Enter the number of array elements: ");
    scanf("%d", &inp);
    *n = inp;
}

void main() {
    int n;

    create(&n);

    int arr[n];

    input(n, arr);
    MinusPlus(n, arr);
    print(n, arr);
}
