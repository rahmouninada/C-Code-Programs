/* C progam to read floating-point numbers and print them in a right-justified, decimal format */

#include <stdio.h>

double  main() {

	int a, b, c, d, e, f;

	printf("Enter six integers:\n");

	scanf("%i %i %i %i %i %i",&a, &b, &c, &d, &e, &f);

	printf("1234567890bb1234567890\n");

	printf("%10i", a);

	printf("%12i\n", b);

	printf("%10i", c);

	printf("%12i\n", d);

	printf("%10i", e);

	printf("%12i\n", f);

}
