#include <stdio.h>
main(){
	int a,b;
	while(1){
		scanf("%d",&a);
		if(a == 0) break;
		scanf("%d",&b);
		if(b == 0) break;
		printf("%d\n",a+b);
	}
}