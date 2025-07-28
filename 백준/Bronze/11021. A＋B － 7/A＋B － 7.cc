#include <stdio.h>
int main(void) {
	int n;
	scanf("%d", &n);
	int a=0, b=0;
	for (int i = 0;i < n;i++) {
		scanf("%d %d", &a, &b);
		printf("Case #%d: %d\n", i + 1, a + b);
	}
	return 0;
}