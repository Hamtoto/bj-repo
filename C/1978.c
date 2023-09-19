#include <stdio.h>

int sosu(int x){
    int i;
    if(x == 1) return 0; 
    if(x == 2) return 1;
    for(i = 2; i < x; i++){
        if(x % i == 0) return 0;
    }
    return 1;
}

int main(){
	int i, c = 0 , data = 0, count = 0;

	scanf("%d",&c);
	for(i = 0 ; i < c ; i++){
		scanf("%d",&data);
		if(sosu(data)) count++;
	}
	printf("%d",count);
	return 0;
}