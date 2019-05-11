/* C program to bubble sort strings in an array with C string library functions */

#include <stdio.h>  /* Need for standard I/O functions */
#include <string.h> /* Need for strlen() */

#define NUM 25   /* number of strings */
#define LEN 1000  /* max length of each string */

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
	  char temp[LEN];

	  while (bubble < NUM * NUM) {
		    for (int i = 0; i < NUM - 1; i++) {
			      char *string1 = Strings[i];
			      char *string2 = Strings[i + 1];
			      if (strcmp(string1, string2) < 0) {
				        continue;
			      } else if (strcmp(string1, string2) == 0) {
				        continue;
			      } else {
				        strcpy(temp, string1);
				        strcpy(string1, string2);
				        strcpy(string2, temp);
			      }
		    }
        bubble++;
	  }

	  puts("\nIn alphabetical order, the strings are:");

	  for(int i = 0; i < NUM; i++) {
		    printf("%s", Strings[i]);
	  }
}
