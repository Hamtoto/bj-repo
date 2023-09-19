#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(){
	int a,a1,a2,a3,a4,b,b1,b2,b3,b4;
	scanf("%d %d",&a,&b);
	a1=a/100;
	a2=(a-a1*100)/10;
	a3=a-(a1*100+a2*10);
	b1=b/100;
	b2=(b-b1*100)/10;
	b3=b-(b1*100+b2*10);

	a4=a3*100+a2*10+a1;
	b4=b3*100+b2*10+b1;

	if(a4>b4){
	printf("%d",a4);
	}
	if(a4<b4){
	printf("%d",b4);
	}
}