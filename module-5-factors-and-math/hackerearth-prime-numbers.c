#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int isPrime = (n >= 2);
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            isPrime = 0;
            break;
        }
    }
    printf(isPrime ? "YES\n" : "NO\n");
    return 0;
}
