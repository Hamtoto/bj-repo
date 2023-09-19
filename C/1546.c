#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int* arr;
	int i, size = 0;
	double count = 0,avg = 0, sum;

	scanf("%d", &size);
	
	arr = (int*)malloc(sizeof(int) * size);
	
	for (i = 0; i < size; i++)
		scanf("%d", &arr[i]);

	for (i = 0; i < size; i++) {
		if (count < arr[i]) {
			count = (double)arr[i];
		}
	}

	for (i = 0; i < size; i++) {
		sum = arr[i] * 100;
		sum /=  count;
		avg += sum;
	}

	printf("%.4f \n", avg / size);

	free(arr);
	return 0;
}