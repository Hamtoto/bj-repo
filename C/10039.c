#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(){
	int i, ans[5],ave;
	ave=0;
	for(i=0; i<5; i++){
		scanf("%d",&ans[i]);
	}
	for(i=0; i<5;i++){
		if(ans[i]<40){
			ans[i]=40;
		}
	}
	for(i=0; i<5; i++){
		ave=ave+ans[i];
	}
	ave=ave/5;
	printf("%d",ave);
}