#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){

	// 킹 1개, 퀸 1개, 룩 2개, 비숍 2개, 나이트 2개, 폰 8개
	int i,chess[6],need[6] = {1,1,2,2,2,8},a,b;

	for(i=0;i<6;i++){
		scanf("%d",&chess[i]);
	}
	for(i=0;i<6;i++){
		a = need[i];
		b = chess[i];
		if(a>b) 
			chess[i]=a-b;
		else if(b>a) 
			chess[i]=a-b;
		else 
			chess[i]=0;

		printf("%d ",chess[i]);
	}
	return 0;
}