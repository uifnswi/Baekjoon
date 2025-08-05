#include <stdio.h>
int main(void) {
	int st[31] = { 0 };
	
	for (int i = 0;i < 28;i++) {
		int n;
		scanf("%d", &n);
		st[n] = 1;
	}
	for (int i = 1;i <= 30;i++) {
		if (st[i] == 0)
			printf("%d\n", i);
	}

	return 0;
}