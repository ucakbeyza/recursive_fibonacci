#include <stdio.h>

// Fibonacci serisini hesaplayan özyinelemeli fonksiyon
int fibonacci(int n) {
    // Temel durum: n 0 veya 1 ise, n değerini döndür
    if (n == 0 || n == 1) {
        return n;
    }
    // Recursive çağrı: n-1 ve n-2 için fibonacci fonksiyonunu çağır
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n, i;

    printf("Fibonacci serisinin ilk kac terimini hesaplamak istiyorsunuz: ");
    scanf("%d", &n);

    printf("Fibonacci serisi: ");
    for (i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }

    return 0;
}
