#include <stdio.h>
int main(void) {
	int n;
	int arr[1000];
	scanf("%d", &n);
	for (int i = 0;i < n;i++) {
		scanf("%d", &arr[i]);
		
	}
	int temp = 0;
	for (int i = 0;i < n - 1;i++) {
		for (int j = 0;j < n - 1 - i;j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}

	}
	for (int i = 0;i < n;i++)
		printf("%d\n", arr[i]);
	return 0;
}