#include <stdio.h>
int main(void) {
	char string[100];
	while (fgets(string, sizeof(string), stdin)) {
		printf("%s", string);
	}

	return 0;
}