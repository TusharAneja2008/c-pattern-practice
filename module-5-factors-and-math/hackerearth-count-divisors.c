#include <stdio.h>

int main() {
    long long l, r, k;
    scanf("%lld %lld %lld", &l, &r, &k);
    printf("%lld\n", r / k - (l - 1) / k);
    return 0;
}
