/* C program to generate binary patterns of length N without 2 or more consecutive 1s */

#include <stdio.h>

int n;
int array[10];

void pArray() {

        for(int i = 0; i < n; i++) {
                printf("%d", array[i]);
        }
        printf("\n");
}

void binaryPatterns(int i) {

        if (i == n) {
                pArray();
                return;
        }

        array[i] = 0;
        binaryPatterns(i + 1);

        if (i > 0 && array[i - 1] == 1) {
                return;
        } else {
                array[i] = 1;
                binaryPatterns(i + 1);
        }
}

int main() {

        for(int i = 0; i < n; i++) {
                array[i] = 0;
        }

        scanf("%d", &n);
        binaryPatterns(0);
        return 0;
}
