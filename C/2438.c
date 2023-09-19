#include <stdio.h>

main(){
	int d,n=1;
	scanf("%d",&d);
	for(int i=0;i<d;i++){
		for(int j=0;j<n;j++){
			printf("*");
		}
		n++;
		printf("\n");
	}
}