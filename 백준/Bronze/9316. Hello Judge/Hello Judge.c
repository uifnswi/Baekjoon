#include <stdio.h>
int main(void) {
	int n;
	scanf("%d", &n);
	for (int i = 0;i < n;i++) {
		printf("Hello World, Judge %d!\n", i + 1);
	}

	return 0;
}