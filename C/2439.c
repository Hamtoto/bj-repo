#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

main(){
	int e,i,d,n;
	scanf("%d",&d);
	n=1;
	e=d;
	for(i=0;i<d+1;i++){
		for(i=0;i<e-1;i++){
			printf(" ");
		}
		for(i=0;i<n;i++){
			printf("*");
		}
		n=n+1;
		e=e-1;
		printf("\n");
	}
}