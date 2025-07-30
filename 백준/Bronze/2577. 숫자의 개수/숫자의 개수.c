#include <stdio.h>
int main(void) {
	int a, b, c;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	int sum = 0;
	sum = a * b * c;

	int cnt[10] = { 0 };

	if (sum == 0) {
		cnt[0] = 1;
	}
	else {
		while (sum > 0) {
			int n = sum % 10;
			cnt[n]++;
			sum /= 10;
		}
	}

	for (int i = 0;i < 10;i++) {
		printf("%d\n", cnt[i]);
	}
	return 0;
}