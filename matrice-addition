/* C Program that adds matrices represented by 2-dimensional arrays */

#include <stdio.h>

int main() {

  int arrayAIndex, arrayBIndex;
  int arrayA[9], arrayB[9];   // array representation of matrix A & B;
  int A[3][3];    // matrix A
  int B[3][3];    // matrix B
  int C[3][3];    // matrix to store their sum

  // scan values into array A:
  printf("Please enter 9 values for matrix A:\n");
  for(int i = 0; i < 9; i++) {
	    scanf("%d", &arrayA[i]);
  }

  // scan values into array B:
  printf("Please enter 9 values for matrix B:\n");
  for(int i = 0; i < 9; i++) {
      scanf("%d", &arrayB[i]);
  }

  // load values into matrix A:
  arrayAIndex = 0;
  for(int row = 0; row < 3; row++) {
	    for(int column = 0; column < 3; column++) {
          A[row][column] = arrayA[arrayAIndex];
          arrayAIndex++;
	    }
  }

  // load values into matrix B:
  arrayBIndex = 0;
  for(int row = 0; row < 3; row++) {
      for(int column = 0; column < 3; column++) {
          B[row][column] = arrayB[arrayBIndex];
          arrayBIndex++;
      }
  }

  // add matrices A & B into C & Print C:
  printf("C = B + A =\n");
  for(int row = 0; row < 3; row++) {
      for(int column = 0; column < 3; column++) {
           C[row][column] = A[row][column] + B[row][column];
		       printf("	%10d", C[row][column]);
      }
	    printf("\n");
  }
}
