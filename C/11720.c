#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char data[100] = { 0, };
	int len, i, sum = 0;
	scanf("%d", &len);
	scanf("%s", data);

	for (i = 0; i<len; i++)
		sum += (data[i] - '0');

	printf("%d\n", sum);

	return 0;

}