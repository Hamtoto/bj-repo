#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N,fir=0,sec=0,sum=0,count=0;

	scanf("%d",&N);
	sum=N;

	while(1){
		count++;
		//자리수 분해
		fir=sum/10;
		sec=sum%10;
        
		//합산
		sum=fir+sec;
		sum=sec*10+sum%10;
        
		if(N==sum){
			break;
		}
		
	}
	printf("%d \n",count);

	return 0;
}
