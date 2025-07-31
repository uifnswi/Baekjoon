#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int sanggeun(int num) {
	int hun = num % 10;
	int ten = (num / 10) % 10;
	int one = num / 100;
	return hun * 100 + ten * 10 + one;
}
int main(void) {
	int a, b;
	scanf("%d %d", &a, &b);
	int a1 = sanggeun(a);
	int b1 = sanggeun(b);

	if (a1 > b1)
		printf("%d\n", a1);
	else
		printf("%d\n", b1);
	return 0;
}