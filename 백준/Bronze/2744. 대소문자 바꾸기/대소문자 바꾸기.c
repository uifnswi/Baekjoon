#include <stdio.h>
#include <string.h>
int main(void) {
	char word[101];
	scanf("%s", word);

	for (int i = 0;i < strlen(word);i++) {
		if (word[i] >= 'A' && word[i] <= 'Z') {
			word[i] += 32;
		}
		else if (word[i] >= 'a' && word[i] <= 'z') {
			word[i] -= 32;
		}
	}

	printf("%s", word);
	return 0;
}