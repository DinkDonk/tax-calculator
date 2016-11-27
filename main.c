#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	if (argc == 2) {
		double total = atof(argv[1]);
		double totalAfterSalesTax = total / 1.25;
		int salesTax = (int)round(total - totalAfterSalesTax);
		int tax = (int)round(totalAfterSalesTax - (totalAfterSalesTax / 1.36));

		printf("  Sales tax: \e[0;35m%d\e[0m\n  Tax: \e[0;35m%d\e[0m\n", salesTax, tax);
	} else {
		printf("One argument expected.\n");
	}

	return 0;
}