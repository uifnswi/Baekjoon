#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void) {
	int n;
	int cnt = 0;
	scanf("%d", &n);
	char gw[100];
	for(int i=0;i<n;i++) {
		scanf("%s", gw);
		int check[26] = { 0 };
		int isgw = 1;
		char prev = 0;

		for (int j = 0;gw[j] != '\0';j++) {
			if (gw[j] != prev) {
				if (check[gw[j] - 'a']) {
					isgw = 0;
					break;
				}
				check[gw[j] - 'a'] = 1;
			}
			prev = gw[j];
		}
		if (isgw)
			cnt++;
	}
	printf("%d\n", cnt);
	return 0;
}