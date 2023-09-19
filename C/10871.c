#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
	int i,a[10000],x,n;
	scanf("%d %d",&n,&x);

	for(i=0; i<n; i++){
		scanf("%d",&a[i]);
	}
	for(i=0; i<n;i++){
		if(a[i]<x){
			printf("%d ",a[i]);
		}
	}
	return 0;
}
