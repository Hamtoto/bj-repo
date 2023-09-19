#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

main(){
	int i,d,c,n;
	scanf("%d",&d);
	n=d;
	for(i=0;i<d;i++){
		for(c=0;c<n;c++){
			printf("*");
		}
		n=n-1;
		printf("\n");
	}
}