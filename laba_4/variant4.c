//Find the sum of those array values that are divisible by 5.
//Найти сумму тех значений массива, которые делятся на 5

#include <stdio.h>

void main() {
    int N, arr[N], * p_arr, sum = 0;
    p_arr = arr;
    printf("Введите количетво элементов в массиве: ");
    scanf("%d", &N); 
     
    for (int k = 0; k < N; k++) {
        printf("Введите элемент %d массива: ", k + 1);
        scanf("%d", p_arr++);
    }
        p_arr = arr;
    for (int j = 0; j < N; j++) {
        printf("%3d", *p_arr++);
    }
        p_arr = arr;
        
    printf("\n");
    
    for (int i = 0; i < N; i++) {
        if (!(*p_arr % 5)) {
            sum = sum + *p_arr;
        }
        *p_arr++;
    }
    printf("Сумма элементов массива, которые делятся на 5: %d\n", sum);
}
