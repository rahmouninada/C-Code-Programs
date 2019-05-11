/* C program to find area & circumference of a circle */

#include <stdio.h>
#define PI 3.14159

int main() {

  float r, a, c;

  do {
    printf("Enter radius (in cm):\n");
    scanf("%f", &r);

		r = r / 2.54;
	  c = 2 * PI * r;
	  a = PI * r * r;

	  if (r != 0.00) {
	    printf("Circle's area is %3.2f (sq in).\n", a);
	    printf("Its circumference is %3.2f (in).\n", c);
	  }    
    
	} while (r > 0);
	    printf("Circle's area is %3.2f (sq in).\n", a);
	    printf("Its circumference is %3.2f (in).\n", c);
}
