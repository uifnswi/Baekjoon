#include <stdio.h>
int main(void) {
	int a[10];
	int b[10];
	int sum = 0;
	for (int i = 0;i < 10;i++) {
		scanf("%d", &a[i]);
		b[i] = a[i] % 42;
	}
	for (int i = 0;i < 10;i++) {
		int n = 1;
		for (int j = 0;j < i;j++) {
			if (b[i] == b[j]) {
				n = 0;
				break;
			}
		}
		if (n)
			sum++;
	}
	printf("%d", sum);

	return 0;
}