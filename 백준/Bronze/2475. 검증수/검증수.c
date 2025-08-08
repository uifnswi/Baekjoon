#include <stdio.h>
int main(void) {
	int num[5];
	int t = 0;
	for (int i = 0;i < 5;i++) {
		scanf("%d", &num[i]);
		t += num[i] * num[i];
	}
	printf("%d", t % 10);

	return 0;
}