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
