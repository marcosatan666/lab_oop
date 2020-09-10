#include <stdio.h>

int main() {
    int m, n, k, res = 1;
    printf("Beginning number: ");
    scanf("%d", &m);
    printf("Finite number: ");
    scanf("%d", &n);
    printf("Rational number: ");
    scanf("%d", &k);
    
    for(int i = m; i <= n; i++) if (i%k == 0) res *= i;

    printf("Product of numbers from %d to %d which rational to %d: %d", m, n, k, res);
}
