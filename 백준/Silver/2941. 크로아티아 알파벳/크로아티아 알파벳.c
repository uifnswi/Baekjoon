#include <stdio.h>
#include <string.h>
int main(void) {
	char word[100];
	scanf("%s", word);

	int cnt = 0;

	for (int i = 0;i < strlen(word);i++) {
		if (word[i] == 'd') {
			if (word[i + 1] == 'z' && word[i + 2] == '=') {
				cnt++;
				i += 2;
			}
			else if (word[i + 1] == '-') {
				cnt++;
				i++;
			}
			else
				cnt++;
		}
		else if (word[i] == 'c') {
			if (word[i + 1] == '='||word[i+1]=='-') {
				cnt++;
				i++;
			}
			else
				cnt++;
		}
		else if (word[i] == 'l' && word[i + 1] == 'j') {
			cnt++;
			i++;
		}
		else if (word[i] == 'n' && word[i + 1] == 'j') {
			cnt++;
			i++;
		}
		else if (word[i] == 's' && word[i + 1] == '=') {
			cnt++;
			i++;
		}
		else if (word[i] == 'z' && word[i + 1] == '=') {
			cnt++;
			i++;
		}
		else
			cnt++;
	}
	printf("%d", cnt);
	return 0;
}