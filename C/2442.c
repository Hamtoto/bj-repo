#include <stdio.h>

main(){
	int i,d,c=1,f,e,a;
	scanf("%d",&d);
	a=d-1;
	for(f=0;f<d;f++){
		for(e=0;e<a;e++){
			printf(" ");
		}
		for(i=0;i<2*c-1;i++){
			printf("*");
		}
		a--;
		c++;
		printf("\n");
	}
}