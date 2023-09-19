#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

main(){
	int n,i,d;
	d=0;
	scanf("%d",&n);
	for(i=0;i<n+1;i++){
		d=i+d;
	}
	printf("%d",d);
}