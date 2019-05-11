/* C program to verify if a number is triangular and print nearest triangular below the number, if it is not */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>


int main() {
	int i;

	while (true){
		  printf("Number ?\n");
		  scanf("%d", &i);

		if (i == 0) {
			  printf("Done\n");
			  break;
		}

		double squareRoot = sqrt((8*(double)i) + 1);

		if ((squareRoot - floor(squareRoot)) == 0) {
			  printf("%d is a triangular number\n", i);
		} else {
			  int x = floor((squareRoot - 1) / 2);
			  int nTN = ((pow((2*x+1), 2) - 1) / 8);
			  printf("%d is not triangular, nearest triangular number below %d is %d\n", i, i, nTN);
		}
	}
}
