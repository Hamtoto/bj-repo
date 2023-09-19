#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

main(){
	int n,i,d=1;
	scanf("%d",&n);
	for(i=0;i<9;i++){
		printf("%d * %d = %d \n",n,d,n*d);
		d=d+1;
	}
}