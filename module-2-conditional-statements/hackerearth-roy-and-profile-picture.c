#include <stdio.h>

int main() {
    int L, N;
    scanf("%d", &L);
    scanf("%d", &N);
    while (N--) {
        int w, h;
        scanf("%d %d", &w, &h);
        if (w < L || h < L) {
            printf("UPLOAD ANOTHER\n");
        } else if (w == h) {
            printf("ACCEPTED\n");
        } else {
            printf("CROP IT\n");
        }
    }
    return 0;
}
