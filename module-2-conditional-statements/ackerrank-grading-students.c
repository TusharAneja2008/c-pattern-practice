#include <stdlib.h>

int* gradingStudents(int grades_count, int* grades, int* result_count) {
    *result_count = grades_count;
    int *result = malloc(grades_count * sizeof(int));
    for (int i = 0; i < grades_count; i++) {
        int g = grades[i];
        int next = ((g / 5) + 1) * 5;
        if (g >= 38 && next - g < 3) {
            result[i] = next;
        } else {
            result[i] = g;
        }
    }
    return result;
}
