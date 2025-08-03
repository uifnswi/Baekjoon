#include <stdio.h>
int main(void) {
	int c;
	scanf("%d", &c);
	int n;
	int js[1000];
	float b[1000] = { 0 };
	int cnt = 0;
	int sum = 0;
	for (int i = 0;i < c;i++) {
		scanf("%d", &n);
		sum = 0;
		cnt = 0;
		for (int j = 0;j < n;j++) {
			scanf("%d", &js[j]);
			sum += js[j];
		}
		for (int j = 0;j < n;j++) {
			if (js[j] > (float)sum / n)
				cnt++;
		}
		b[i] = ((float)cnt / n) * 100;
	}

	for (int i = 0;i < c;i++) {
		printf("%.3f%%\n", b[i]);
	}
	return 0;
}