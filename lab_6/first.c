//Find the number of negative elements of the matrix [MxN] located in columns with a number multiple of A.
//Найти число отрицательных элементов матрицы [MxN], расположенных в столбцах с номером, кратным A. 
//Memory is allocated in one block for the size of all data in the array. The row and column numbers are translated into the element number in allocated memory block
//Память выделяется одним блоком на размер всех данных массива. Номер строки и столбца переводятся в номер элемента в выделенном блоке памяти 

#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

void main() {
    int *p;
    int M, N, A, kol = 0;
    printf("Enter M: ");
    scanf("%d", &M);
    printf("Enter N: ");
    scanf("%d", &N);
    printf("Enter A: ");
    scanf("%d", &A);

    p = (int*)malloc(M * N * sizeof(int));
    
    for (int i = 0; i < M; i++){
        for (int j = 0; j < N; j++){
            printf("Enter element %d %d of matrix: ", i + 1, j + 1);
            scanf("%d", (p + i*N + j));
        }
    }


    for (int i=0; i<N; i++) if (!(i%A)) for (int j=0; j<M; j++) {
        if (*(p + i*N + j)<0) kol++;
    }
    printf("Result: %d", kol);
}
