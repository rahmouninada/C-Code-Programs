/* C program to compute and print all binary patterns of length N */

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
        array[i] = 1;
        binaryPatterns(i + 1);

}

int main() {

        for(int i = 0; i < n; i++) {
                array[i] = 0;
        }

        scanf("%d", &n);
        binaryPatterns(0);
        return 0;

}
