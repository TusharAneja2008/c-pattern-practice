#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    const char *words[] = {"zero", "one", "two", "three", "four",
                           "five", "six", "seven", "eight", "nine"};
    if (n > 9) {
        printf("Greater than 9\n");
    } else {
        printf("%s\n", words[n]);
    }
    return 0;
}
