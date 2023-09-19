#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
	int i,j,n,che[50][3] = { 0, };
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<2;j++){
			scanf("%d",&che[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){ 
			if(che[i][0]>che[j][0] && che[i][1]>che[j][1]){
				che[j][2]=che[j][2]+1;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d ",che[i][2]+1);
	}
	return 0;
}