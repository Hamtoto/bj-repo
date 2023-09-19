#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

main(){
	int n, i, d;
	scanf("%d",&d);
	n=d;
	for(i=0;i<d;i++){
		printf("%d \n",n);
		n=n-1;
	}
}