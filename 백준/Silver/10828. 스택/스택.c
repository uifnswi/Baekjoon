#include <stdio.h>
int main(void) {
	int stack[10000];
	int top = -1;
	int n;
	char cmd[10];
	int x;
	scanf("%d", &n);
	for (int i = 0;i < n;i++) {
		scanf("%s", cmd);
		if (strcmp(cmd, "push") == 0) {
			scanf("%d", &x);
			stack[++top] = x;
		}
		else if (strcmp(cmd, "pop") == 0) {
			if (top == -1)
				printf("-1\n");
			else
				printf("%d\n", stack[top--]);
		}
		else if (strcmp(cmd, "size") == 0) {
			printf("%d\n", top + 1);
		}
		else if (strcmp(cmd, "empty") == 0) {
			if (top == -1)
				printf("1\n");
			else
				printf("0\n");
		}
		else if (strcmp(cmd, "top") == 0) {
			if (top == -1)
				printf("-1\n");
			else
				printf("%d\n", stack[top]);
		}
	}

	return 0;
}