#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(){
	int N,j, i,sample[1000],tmp;
	
	scanf("%d",&N);
	for(i=0;i<N;i++){
			scanf("%d",&sample[i]);
	}

	for (i = 0; i < N; i++) {
		for (j = 0; j < N - i - 1; j++) {
			if(sample[j] > sample[j+1]) {
				tmp = sample[j];
				sample[j] = sample[j+1];
				sample[j+1] = tmp;
			}
		}
	}
	
	for(i=0;i<N;i++){
		printf("%d ",sample[i]);
	}

	return 0;
}