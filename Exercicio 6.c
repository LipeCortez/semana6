#include <stdio.h>
#include <stdlib.h>

void somarMatrizes(int n, int m, int A[n][m], int B[n][m], int C[n][m]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}