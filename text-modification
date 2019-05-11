/* C Program to read an input text and modify it by replacing certain characters*/

#include <stdio.h>
#include <string.h>
#define MAX_BUF 1024

int main () {

  char buf[MAX_BUF], c;
  int length;

  do {
      fgets(buf, MAX_BUF, stdin);
      length = strlen(buf) - 1;

      for(int i = 0; i < length; i++) {
	        c = buf[i];
	        if (c == 'E' || c == 'e') {
		          buf[i] = '3';
        	} else if (c == 'I' || c == 'i') {
		          buf[i] = '1';
	        } else if (c == 'O' || c == 'o') {
		          buf[i] = '0';
	        } else if (c == 'S' || c == 's') {
		          buf[i] = '5';
	        }
       }
       printf("%s\n", buf);
  } while (length > 1);
}
