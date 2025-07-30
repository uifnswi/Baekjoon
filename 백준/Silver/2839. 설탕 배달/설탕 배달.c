#include <stdio.h>
int main(void) {
	int n;
	scanf("%d", &n);
	
	int cnt = 0;
	while (n >= 0) {
		if (n % 5 == 0) {
			cnt += n / 5;
			printf("%d", cnt);
			return 0;
		}
		n -= 3;
		cnt++;
	}

	printf("-1\n");
	return 0;
}