#include <stdio.h>
#include <stdarg.h>

void my_sum(char c, int count, ...) {
	va_list lst;
	va_start(lst, count);

	switch(c) {
		case 'S':
			for(int i = 0; i < count; i++) {
				printf("%s ", va_arg(lst, char *));
			}
			break;

		case 'C': 
			for(int i = 0; i < count; i++) {
				printf("%c", va_arg(lst, int));
			}
			break;

		case 'D':
			int total = 0;
			for(int i = 0; i < count; i++) {
				total += va_arg(lst, int);
			}
			printf("%d", total);
			break;

	}
	printf("\n");
	
}

int main() {
	my_sum('S', 2, "Hello", "World");
	my_sum('C', 3, 'C', 'N', 'U');
	my_sum('D', 4, 10, 20, 30, 40);

	return 0;
}
