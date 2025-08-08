#include <stdio.h>
#include <string.h>
int main(void) {
	int t;
	scanf("%d", &t);
	char tc[1000];
	for (int i = 0;i < t;i++) {
		scanf("%s", tc);
		int len = strlen(tc);
		printf("%c%c\n", tc[0], tc[len - 1]);
	}
	return 0;
}