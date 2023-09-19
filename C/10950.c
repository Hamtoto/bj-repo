#include <stdio.h>

int main(){
  
	int t,i,a,b,ans[10000];

	scanf("%d",&t);

	for(i=0;i<t;i++){
		scanf("%d",&a);
		scanf("%d",&b);
		ans[i]=a+b;
	}
	for(i=0;i<t;i++){
		printf("%d\n",ans[i]);
	}
	
	return 0;
}