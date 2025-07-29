#include <stdio.h>
int main(void) {
	int n;
	int sum = 0;
	char num[1000];

	scanf("%d", &n);
	scanf("%s", num);

	for (int i = 0;i < n;i++) {
		sum += num[i]-'0';
	}
	printf("%d\n", sum);
	return 0;
}