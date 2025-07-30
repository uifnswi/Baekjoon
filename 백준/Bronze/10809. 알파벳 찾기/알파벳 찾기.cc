#include <stdio.h>
#include <string.h>
int main(void) {
	char s[100];
	int a[26];
	for (int i = 0;i < 26;i++) {
		a[i] = -1;
	}
	scanf("%s", s);

	for (int i = 0;i < strlen(s);i++) {
		int index = s[i] - 'a';

		if (a[index] == -1) {
			a[index] = i;
		}
	}

	for (int i = 0;i < 26;i++) {
		printf("%d ", a[i]);
	}
	return 0;
}
