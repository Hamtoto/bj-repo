#include <stdio.h>

main(){
	int t,i,a,b;

	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d,%d",&a,&b);
		printf("%d\n",a+b);
	}
}