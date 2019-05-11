/* C Program to print first n ordinal numbers */

#include <stdio.h>

int main () {
	int n, count;

	printf("Enter a number from 1 to 20:\n");
	scanf("%d", &n);

	if (n < 1 || n > 20) {
  
	  printf("Number is not in the range from 1 to 20\n");
	
  } else {

      printf("Here are the first %d ordinal numbers:\n", n);

      for (count = 1; count < n + 1 ; count++) {

        if (count == 1) {
            printf("1st\n");
        } else if (count == 2) {
				    printf("2nd\n");
		   	} else if (count == 3) {
				    printf("3rd\n");
			  } else {
				    printf("%dth\n", count);
			  }
	    }
    }
 }
