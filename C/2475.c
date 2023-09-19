#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(){
	int a,b,c,d,e,f;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	scanf("%d",&d);
	scanf("%d",&e);
	f=a*a+b*b+c*c+d*d+e*e;
	printf("%d",f%10);
}