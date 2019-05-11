/* C program to compute the reverse of a text and report if it is a palindrome */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 1000

int main() {
  char text[MAX], c, reverseText[MAX], d, simpleT[MAX], simpleRT[MAX];
  int i, j, simpleTIndex, simpleRTIndex, tIndex, rtIndex;
  int letters, digits, other;
  int length;

  puts("Type some text (then ENTER):");

  // scan input text into text & store length:
  fgets(text, MAX, stdin);
  length = strlen(text) - 1;

  // load text backwards into reverseText:
  for (i = length - 1; i > -1; i--) {
	    c = text[i];
	    reverseText[j] = c;
	    j++;
  }

  // make sure both text & reverseText terminate in same index:
  reverseText[length] = '\0';
  text[length] = '\0';

  // count how many letters are in text:
  letters = 0;
  for (i = letters = digits = other = 0; i < length; i++) {
	    c = text[i];
	    if (c >= 'a' && c <= 'z') {
          letters++;
	    } else if (c >= 'A' && c <= 'Z') {
          letters++;
    	}
  }

  // create new string, simpleT, that is text with just letters:
  simpleTIndex = 0;
  tIndex = 0;
  while (tIndex < length) {
	    c = text[tIndex];
    	tIndex++;
	    if (isalpha(c)) {
		      simpleT[simpleTIndex] = tolower(c);
		      simpleTIndex++;
	    }
  }

  // create new string, simpleRT, that is reverseText with just letters:
  simpleRTIndex = 0;
  rtIndex = 0;
  while (rtIndex < length) {
	    d = reverseText[rtIndex];
	    rtIndex++;
	    if (isalpha(d)) {
		      simpleRT[simpleRTIndex] = tolower(d);
		      simpleRTIndex++;
	    }
  }

  // make sure both simpleT & simpleRT terminate on same index:
  simpleT[letters] = '\0';
  simpleRT[letters] = '\0';

  // print input in reverse & notify if it is a palindrome:
  printf("Your input in reverse is:\n");
  printf("%s\n", reverseText);

  if (strcmp(simpleT, simpleRT) == 0) {
	     printf("Found a palindrome!\n");
  }

}
