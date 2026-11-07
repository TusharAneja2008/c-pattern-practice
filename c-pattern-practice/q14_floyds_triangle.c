#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    int c = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (j > 1) printf(" ");
            printf("%d", c++);
        }
        printf("\n");
    }
    return 0;
}
