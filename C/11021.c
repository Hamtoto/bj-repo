#include <stdio.h>

main(){
	int t,i,a,b;
	
	scanf("%d",&t);

	for(i=0;i<t;i++){
		scanf("%d %d",&a,&b);
		printf("Case #%d: %d\n",i+1,a+b);
	}
}