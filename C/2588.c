#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(){
	int a,b,c,d,e,f,g;
	scanf("%d",&a);
	scanf("%d",&b);

	c=b-(b/10*10);
	d=a*c;
	e=a*(b-(b/100*100+c))/10;
	f=(b/100)*a;
	g=a*b;
	printf("%d \n",d);
	printf("%d \n",e);
	printf("%d \n",f);
	printf("%d \n",g);
}