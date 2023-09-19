#include <stdio.h>
#define STAR() printf("*");
#define BAK() printf(" ");
main(){
    int n,i,j,tmp;
    scanf("%d",&n);
    n=n*2-1;
    tmp = n;
    for(i=0;i<(n/2+1);i++){
        for(j=0;j<i;j++){
            BAK();
        }
        
        for(j=i;j<tmp;j++){
            STAR();
        }
        tmp--;
        printf("\n");
    }
	
	for(i=(n/2+1);i<n;i++){
		for(j=i+1;j<n;j++){
            BAK();
        }
		for(j=tmp-2;j<i;j++){
            STAR();
        }
		
		tmp--;
		printf("\n");
	}
}