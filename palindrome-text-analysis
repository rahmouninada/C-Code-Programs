/* C program to compute the reverse of an input text and report if it is a palindrome */

#include <stdio.h>
#include <string.h>

#define MAX 1000

int main() {
  char text[MAX], c, reverseText[MAX];
  int i, j;
  int lowercase, uppercase, digits, other;
  int length;

  puts("Type some text (then ENTER):");
  
  fgets(text, MAX, stdin);

  length = strlen(text) - 1;

  for (i = length - 1; i > -1; i--) {
	    c = text[i];
	    reverseText[j] = c;
	    j++;
  }

  reverseText[length] = '\0';
  text[length] = '\0';

  printf("Your input in reverse is:\n");
  printf("%s\n", reverseText);

  int isPalindrome = strcmp(text, reverseText);
  if (isPalindrome == 0) {
	    printf("Found a palindrome!\n");
  }

}
