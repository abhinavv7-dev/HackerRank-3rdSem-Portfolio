#include <stdio.h>
#include <stdlib.h>

int* compareTriplets(int a_count, int* a, int b_count, int* b, int* result_count) {
    *result_count = 2;
    int* score = (int*)malloc(2 * sizeof(int));
    score[0] = 0;
    score[1] = 0;

    for (int i = 0; i < 3; i++) {
        if (a[i] > b[i]) {
            score[0]++;
        } else if (a[i] < b[i]) {
            score[1]++;
        }
    }
    return score;
}

int main() {
    int a[3] = {5, 6, 7};
    int b[3] = {3, 6, 10};
    int result_count;
    int* result = compareTriplets(3, a, 3, b, &result_count);
    printf("%d %d\n", result[0], result[1]);
    free(result);
    return 0;
}