//Найти число отрицательных элементов матрицы [MxN], расположенных в столбцах с номером, кратным A. 
//Find the number of negative elements of the matrix [MxN] located in columns with a number multiple of A.

#include <stdio.h>

int main() {
int m, n, kol=0, a;
printf("Enter M: ");
scanf("%d",&m);
printf("Enter N: ");
scanf("%d",&n);
int arr[m][n];
for (int i=0; i<m; i++) for (int j=0; j<n; j++) {
    printf("Enter element a(%d,%d): ", i+1,j+1);
    scanf("%d", &arr[i][j]);
}
printf("Enter A: ");
scanf("%d", &a);
for (int j=0; j<n; j++) if (!(j%a)) for (int i=0; i<m; i++) {
    if (arr[i][j]<0) kol++;
}
printf("Result: %d", kol);

return 0;
}
