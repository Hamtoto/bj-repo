#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){

	int sco[8],sort[8],i,j,sum=0,temp;

	for(i=0;i<8;i++){
		scanf("%d",&sco[i]);
		sort[i]=sco[i];
	}
	for(i=0;i<8;i++){
		for(j=0;j<7;j++){ 
			if (sort[j] < sort[j + 1]){
                temp = sort[j];
                sort[j] = sort[j + 1];
                sort[j + 1] = temp;
            }
		}
	}
	for(i=0;i<5;i++){
		sum=sum+sort[i];
	}

	for(i=0;i<8;i++){
		for(j=0;j<5;j++){ 
			if(sort[j] == sco[i]){
				sco[i]=-1;
			}
		}
	}

	printf("%d\n",sum);
	for(i=0;i<8;i++){
		if(sco[i]==-1){
			printf("%d ",i+1);
		}
	}
	return 0;
}
