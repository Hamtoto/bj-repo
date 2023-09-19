#include <stdio.h>

int main(){
	int input[9],j,i,sum=0,tmp,result;
	for(i=0;i<9;i++){
		scanf("%d",&input[i]);
	}
	for(i=0;i<9;i++){
		sum += input[i];
	}
	for(i=0; i<9; i++){
		for(j=0; j<9; j++){
			if(j != i){
				result = sum - input[i]-input[j];
				if(result == 100){
					input[i] = -1;
					input[j] = -1;
					break;
				}
			}
		}
		if(result == 100){
			break;
		}
	}
	for (i = 0; i < 9; i++) {
		for (j = 0; j < 9 - i - 1; j++) {
			if(input[j] > input[j+1]) {
				tmp = input[j];
				input[j] = input[j+1];
				input[j+1] = tmp;
			}
		}
	}
	for(i=2; i<9; i++){
		printf("%d\n", input[i]);
	}
	return 0;
}