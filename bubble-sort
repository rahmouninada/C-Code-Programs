/* C program to bubble sort strings in an array without certain C string library functions */

#include <stdio.h>  /* Need for standard I/O functions */
#include <string.h> /* Need for strlen() */


#define NUM 25   /* number of strings */
#define LEN 1000  /* max length of each string */


int my_compare_strings(char string1[], char string2[]) {

	  // returns -1 if string 1 comes before string 2 in alphabetical order
	  // returns 1 if string 1 comes after string 2
	  // returns 0 if string 1 is the same as string 2
	  for (int i = 0; i < LEN; i++) {
		    if (string1[i] != '\0' && string2[i] != '\0') {
			       if (string1[i] < string2[i]) {
                return -1;
			       } else if (string1[i] > string2[i]) {
				        return 1;
			       } else {
				        continue;
			       }
		    } else {
			      if (strlen(string1) < strlen(string2)) {
				        return -1;
			      } else if (strlen(string1) > strlen(string2)) {
				        return 1;
			      } else {
				        return 0;
		      	}
		    }
	  }
}


void my_swap_strings(char string1[], char string2[]) {
    char temp;
	  int length;

	  if (strlen(string1) > strlen(string2)) {
		    length = strlen(string1);
	  } else {
		    length = strlen(string2);
	  }

	  for (int i = 0; i < length + 1; i++) {
		    temp = string1[i];
		    string1[i] = string2[i];
		    string2[i] = temp;
	  }
}


int main() {
	  char Strings[NUM][LEN];

	  printf("Please enter %d strings, one per line:\n", NUM);

	  for (int i = 0; i < NUM; i++) {
		    fgets(Strings[i], LEN, stdin);
	  }

  	puts("\nHere are the strings in the order you entered:");

	  for (int i = 0; i < NUM; i++) {
		    printf("%s", Strings[i]);
	  }

	  // Bubble Sort:

	  int bubble = 0;

	  while (bubble < NUM * NUM) {
		    for (int i = 0; i < NUM - 1; i++) {
			      char *string1 = Strings[i];
			      char *string2 = Strings[i + 1];
			  if (my_compare_strings(string1, string2) == -1) {
				    continue;
			  } else if (my_compare_strings(string1, string2) == 0) {
				    continue;
			  } else {
			    	my_swap_strings(string1, string2);
			  }
		}
		    bubble++;
    }

    puts("\nIn alphabetical order, the strings are:");

	  for (int i = 0; i < NUM; i++) {
		    printf("%s", Strings[i]);
  	}
}
