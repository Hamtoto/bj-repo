#include <stdio.h>

main(){
	int e = 0,i,d,n,f,j;
	scanf("%d",&d);
	n=d;
	for(i=0;i<d;i++){
		for(j=0;j<e;j++){
			printf(" ");
		}
		for(f=0; f<n; f++){
			printf("*");
		}
		n--;
		e++;
		printf("\n");
	}
}