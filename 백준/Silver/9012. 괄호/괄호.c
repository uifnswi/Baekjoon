#include <stdio.h>
#include <string.h>
int main(void) {
	int t;
	scanf("%d", &t);

	while (t--) {
		char s[50];

		scanf("%s", s);
		int cnt = 0;
		int isVPS = 1;

		for (int i = 0;s[i] != 0;i++) {
			if (s[i] == '(') {
				cnt++;
			}
			else if (s[i] == ')') {
				cnt--;
				if (cnt < 0) {
					isVPS = 0;
					break;
				}
			}

			
		}
		if (cnt != 0) {
			isVPS = 0;
		}
		if (isVPS)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}