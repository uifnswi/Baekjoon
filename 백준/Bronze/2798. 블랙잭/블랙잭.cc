#include <stdio.h>
int main(void) {
	int n, m;
	int max=0;
	scanf("%d %d", &n, &m);
	int cards[100];
	for (int i = 0;i < n;i++) {
		scanf("%d", &cards[i]);
	}

	for (int i = 0;i < n - 2;i++) {
		for (int j = i + 1;j < n - 1;j++) {
			for (int k = j + 1;k < n;k++) {
				int sum = cards[i] + cards[j] + cards[k];
				if (sum <= m && sum > max)
					max = sum;
			}
		}
	}
	printf("%d", max);
	return 0;
}