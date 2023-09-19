#include <stdio.h>

int main(){

	int a,b;

	while(1){
		scanf("%d",&a);
		if(a == -1) break;
		scanf("%d",&b);
		if(b == -1) break;
		printf("%d\n",a+b);
		a=-1;
		b=-1;
	}
	
	return 0;
}