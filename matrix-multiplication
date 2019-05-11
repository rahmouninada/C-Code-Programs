/* C program to read and multiply 2 matrices */

#include <stdio.h>

int A[10][10];
int B[10][10];
int C[10][10];
int n;

int main() {

        scanf("%d", &n);

        for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                        scanf("%d", &A[i][j]);
                }
        }

        for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                        scanf("%d", &B[i][j]);
                }
        }

        for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                        int total = 0;
                        for (int k = 0; k <= n; k++) {
                                total += A[i][k] * B[k][j];
                        }
                        C[i][j] = total;
                }
        }

        for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                        printf("%6d", C[i][j]);
                }
                printf("\n");
        }

}
