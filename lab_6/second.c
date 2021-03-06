//Find the number of negative elements of the matrix [MxN] located in columns with a number multiple of A.
//Найти число отрицательных элементов матрицы [MxN], расположенных в столбцах с номером, кратным A. 
//Memory is allocated separately for a one-dimensional array of pointers to rows of the data array. Then memory is dynamically allocated for each row of the data array.
//Память выделяется отдельно под одномерный массив указателей на строки массива данных. Затем динамически выделяется память под каждую строку массива данных.
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

void main() {
    int **p;
    int M, N, A, kol = 0;
    printf("Enter M: ");
    scanf("%d", &M);
    printf("Enter N: ");
    scanf("%d", &N);
    printf("Enter A: ");
    scanf("%d", &A);

    p = (int**)malloc(M * sizeof(int*));
    
    for (int i = 0; i < M; i++){
        p[i] = (int*)malloc(N * sizeof(int));
        for (int j = 0; j < N; j++){
            printf("Enter element %d %d of matrix: ", i + 1, j + 1);
            scanf("%d", &p[i][j]);
        }
    }

    for (int i=0; i<N; i++) if (!(i%A)) for (int j=0; j<M; j++) {
        if (p[i][j]<0) kol++;
    }
    printf("Result: %d", kol);
    free(p);
}
