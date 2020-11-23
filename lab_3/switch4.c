// Given a matrix [MxN]. If the number of rows is greater than the number of columns, double all elements of the matrix.
// If the number of rows is less than the number of columns, triple all elements of the matrix.
// If the matrix is square, zero all of its elements.

//Дана матрица [MxN]. Если число строк больше числа столбцов, удвоить все элементы матрицы.
//Если число строк меньше числа столбцов, утроить все элементы матрицы. 
//Если матрица квадратная, обнулить все ее элементы. 

#include <stdio.h>

int main() {
    int m, n, state;
    printf("Enter M: ");
    scanf("%d",&m);
    printf("Enter N: ");
    scanf("%d",&n);
    int arr[m][n];
    for (int i=0; i<m; i++) for (int j=0; j<n; j++) {
        printf("Enter element a(%d,%d): ", i+1,j+1);
        scanf("%d", &arr[i][j]);
    }
    if (m>n) state=1;
    if (m<n) state=2;
    if (m==n) state=3;
    switch(state) {
        case 1: 
            for (int i=0; i<m; i++) for (int j=0; j<n; j++) {
                printf("%4d", arr[i][j]*2);
                if (j==n-1) {
                    printf("\n");
                } else {
                    printf(" ");
                }
            }
            break;
        case 2: 
            for (int i=0; i<m; i++) for (int j=0; j<n; j++) {
                printf("%4d", arr[i][j]*3);
                if (j==n-1) {
                    printf("\n");
                } else {
                    printf(" ");
                }
            }
            break;
        case 3: 
            for (int i=0; i<m; i++) for (int j=0; j<n; j++) {
                printf("%4d", arr[i][j]*0);
                if (j==n-1) {
                    printf("\n");
                } else {
                    printf(" ");
                }
            }
            break;
        default: printf("Wrong number.");
    }
    return 0;
}
