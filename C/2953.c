#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
	int i,j,a[5][4],sum[5]={0},count=0,num=0;

	for(i=0;i<5;i++){
		for(j=0;j<4;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<5;i++){
		for(j=0;j<4;j++){
			sum[i]=sum[i]+a[i][j];
		}
	}
	for(i=0;i<5;i++){
		if(sum[i]>count){
			count=sum[i];
			num=i+1;
		}
	}
	printf("%d %d",num,count);

	return 0;
}