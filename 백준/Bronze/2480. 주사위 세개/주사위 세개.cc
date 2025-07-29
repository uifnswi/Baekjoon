#include <stdio.h>
int main(void) {
	int f,s,t;
	scanf("%d %d %d", &f, &s, &t);
	if (f == s && s == t) 
		printf("%d", 10000 + f * 1000);
	else if (f == s || f == t) 
		printf("%d", 1000 + f * 100);
	else if (s == t)
		printf("%d", 1000 + s * 100);
	else {
		int max = f;
		if (s > max) max = s;
		if (t > max) max = t;
		printf("%d", max * 100);
	}
	return 0;
}