#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* matchingStrings(int stringList_count, char** stringList, int queries_count, char** queries, int* result_count) {
    *result_count = queries_count;
    int* res = (int*)calloc(queries_count, sizeof(int));

    for (int q = 0; q < queries_count; q++) {
        for (int s = 0; s < stringList_count; s++) {
            if (strcmp(queries[q], stringList[s]) == 0) {
                res[q]++;
            }
        }
    }

    return res;
}