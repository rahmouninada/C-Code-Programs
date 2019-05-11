#include <stdio.h>

int main() {

	int i;
	double d, sum, min, max, product;

	printf("Enter 10 floating-point numbers:\n");
	scanf("%lf", &d);

	sum = d;
	min = d;
	max = d;
	product = d;
        
    i = 1;
    while(i < 10) {
        scanf("%lf", &d);
        
        sum = sum + d;
        product = product * d;

		if (d < min) {
            min = d;
        }

		if (d > max) {
			max = d;
		}
		i++;
    }
    
	printf("Sum is %0.5lf\n", sum);
	printf("Min is %0.5lf\n", min);
	printf("Max is %0.5lf\n", max);
	printf("Product is %0.5lf\n", product);
}
