#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(){
	int i,n,v,a[300],d;
	d=0;
	scanf("%d",&n);
	for(i=0; i<n; i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&v);
	for(i=0; i<n;i++){
		if(a[i]==v){
			d=d+1;
		}
	}
	printf("%d",d);
	return 0;
}