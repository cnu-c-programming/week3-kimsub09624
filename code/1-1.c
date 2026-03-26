#include <stdio.h>

void add(int a, int b) { printf("%d + %d = %d\n", a, b, a + b); }
void sub(int a, int b) { printf("%d - %d = %d\n", a, b, a - b); }
void mul(int a, int b) { printf("%d * %d = %d\n", a, b, a * b); }
void div(int a, int b) { printf("%d / %d = %d\n", a, b, a / b); }


int main() { 
	int a = 10, b = 5;
	
	add(a, b);
	sub(a, b);
	mul(a, b);
	div(a, b);
	

	return 0;
}
