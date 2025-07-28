#include <stdio.h>
int main(void) {
	int n;
	int arr[1000];
	float sum=0;
	int max=0;
	scanf("%d", &n);
	for (int i = 0;i < n;i++) {
		scanf("%d", &arr[i]);
		
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	for (int i = 0;i < n;i++) {
		sum += (float)arr[i] / max * 100;
	}
	printf("%.2f", sum/n);
	return 0;
}