#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int mm,dd,count,i;

int main(){
	scanf("%d %d",&mm,&dd);
	count=dd;
	for(i=1;i<mm;i++){
		if(i==1 || i==3 || i==5 || i==7 || i==8 || i==10 || i==12){
			count=count+31;
		}
		else if(i==4 || i==6 || i==9 || i==11){
			count=count+30;
		}
		else if(i==2){
			count=count+28;
		}
	}
	count=count%7;
	if(count==1){
		printf("MON");
	}
	else if(count==2){
		printf("TUE");
	}
	else if(count==3){
		printf("WED");
	}	
	else if(count==4){
		printf("THU");
	}	
	else if(count==5){
		printf("FRI");
	}	
	else if(count==6){
		printf("SAT");
	}	
	else if(count==0){
		printf("SUN");
	}
	return 0;
}