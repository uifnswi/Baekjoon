#include <stdio.h>
int main(void) {
	int n;
	int v;
	int s[100];
	int cnt = 0;
	scanf("%d", &n);
	for (int i = 0;i < n;i++) {
		scanf("%d", &s[i]);
	}
	scanf("%d", &v);
	for (int i = 0;i < n;i++) {
		if (s[i] == v) {
			cnt++;
		}
	}
	printf("%d", cnt);
	return 0;
}