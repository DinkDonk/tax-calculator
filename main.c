#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

double salesTaxRate = 0.25;
double taxRate = 0.36;
double total;
bool salesTaxEnabled = true;
bool taxEnabled = true;
double salesTax;
double tax;

int main(int argc, char *argv[]) {
	if (argc >= 2) {
		sscanf(argv[1], "%lf", &total);
	}

	if (argc == 3) {
		if (strcmp("--tax-only", argv[2]) == 0) {
			salesTaxEnabled = false;
		}

		if (strcmp("--sales-tax-only", argv[2]) == 0) {
			taxEnabled = false;
		}
	}

	if (argc >= 2) {
		if (!salesTaxEnabled) {
			tax = total * taxRate;

			printf("  Tax: \e[0;35m%d\e[0m\n", (int)floor(tax));
		} else if (!taxEnabled) {
			salesTax = total * salesTaxRate;

			printf("  Sales tax: \e[0;35m%d\e[0m\n", (int)floor(salesTax));
		} else {
			salesTax = total * salesTaxRate;
			double totalAfterSalesTax = total - salesTax;
			tax = totalAfterSalesTax * taxRate;

			printf("  Sales tax: \e[0;35m%d\e[0m\n  Tax: \e[0;35m%d\e[0m\n", (int)floor(salesTax), (int)floor(tax));
		}
	} else {
		printf("Usage: tax <value> [--tax-only | --sales-tax-only].\n");
	}

	return 0;
}