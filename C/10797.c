#include <stdio.h>

int day,car_num[5],i,count;

int main(){
	
	scanf("%d",&day);
	for(i=0;i<5;i++){
		scanf("%d",&car_num[i]);
	}
	for(i=0;i<5;i++){
		if(car_num[i]==day){
			count=count+1;
		}
	}
	printf("%d",count);
}