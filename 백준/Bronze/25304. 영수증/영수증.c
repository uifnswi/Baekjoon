#include <stdio.h>
int main(void) {
	int x;
	int n;
	int ab[200];
	int sum = 0;
	scanf("%d", &x);
	scanf("%d", &n);
	for (int i = 0;i < n * 2;i++) {
		scanf("%d", &ab[i]);
	}
	for (int i = 0;i < n * 2 - 1;i+=2) {
		sum += ab[i] * ab[i + 1];
	}
	if (sum == x) {
		printf("Yes");
	}
	else
		printf("No");
	return 0;
}