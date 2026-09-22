#include <stdio.h>
#include <stdlib.h>

int* dynamicArray(int n, int queries_rows, int queries_columns, int** queries, int* result_count) {
    int** arr = (int**)malloc(n * sizeof(int*));
    int* sizes = (int*)calloc(n, sizeof(int));
    int* capacities = (int*)calloc(n, sizeof(int));

    for (int i = 0; i < n; i++) {
        capacities[i] = 2;
        arr[i] = (int*)malloc(capacities[i] * sizeof(int));
    }

    int* answers = (int*)malloc(queries_rows * sizeof(int));
    int lastAnswer = 0;
    int ans_idx = 0;

    for (int i = 0; i < queries_rows; i++) {
        int type = queries[i][0];
        int x = queries[i][1];
        int y = queries[i][2];
        int idx = (x ^ lastAnswer) % n;

        if (type == 1) {
            if (sizes[idx] == capacities[idx]) {
                capacities[idx] *= 2;
                arr[idx] = (int*)realloc(arr[idx], capacities[idx] * sizeof(int));
            }
            arr[idx][sizes[idx]++] = y;
        } else if (type == 2) {
            int element_idx = y % sizes[idx];
            lastAnswer = arr[idx][element_idx];
            answers[ans_idx++] = lastAnswer;
        }
    }

    *result_count = ans_idx;

    for (int i = 0; i < n; i++) free(arr[i]);
    free(arr);
    free(sizes);
    free(capacities);

    return answers;
}