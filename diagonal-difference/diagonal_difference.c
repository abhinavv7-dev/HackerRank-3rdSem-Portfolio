#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int diagonalDifference(int arr_rows, int arr_columns, int** arr) {
    int primary_diag = 0;
    int secondary_diag = 0;

    for (int i = 0; i < arr_rows; i++) {
        primary_diag += arr[i][i];
        secondary_diag += arr[i][arr_rows - 1 - i];
    }

    return abs(primary_diag - secondary_diag);
}