#include <stdio.h>
#include <string.h>
int main(void) {
	int t;
	char tc[80];
	int cnt = 0;
	int all = 0;
	scanf("%d", &t);
	for (int i = 0;i < t;i++) {
		scanf("%s", tc);

		cnt = 0;
		all = 0;

		for (int j = 0;j < strlen(tc);j++) {
			if (tc[j] == 'O') {
				cnt++;
				all += cnt;
			}
			else 
				cnt = 0;
		}


		printf("%d\n", all);
	}
	return 0;
}