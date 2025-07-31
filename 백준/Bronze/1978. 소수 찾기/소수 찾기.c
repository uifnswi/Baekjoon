#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int n;
	scanf("%d", &n);
	int s;
	int cnt = n;
	for (int i = 0;i < n;i++) {
		scanf("%d", &s);

		if (s < 2) {
			cnt--;
			continue;
		}
			
		for (int j = 2;j < s;j++) {
			if (s % j == 0) {
				cnt--;
				break;
			}

		}
	}
	printf("%d", cnt);
	return 0;
}