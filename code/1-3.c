#include <stdio.h>

int power(int base, int exp) {
	int result = 0;

	if(exp == 0) {
		return 1;
	} else {
		result = base * power(base, exp-1);
	}
		return result;
}

int main() {
	printf("%d\n", power(2, 3));
	printf("%d\n", power(5, 0));
	printf("%d\n", power(3, 4));

	return 0;
}

