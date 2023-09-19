#include <stdio.h>

int main(){
	int i,N,count,a,b,c;
	scanf("%d", &N);
	if (N < 100){
		printf("%d", N);
	}
    else{
        count = 99;
        for (i = 100; i <= N; i++){
            a = i / 100;        // 100의 자리
            b = (i / 10) % 10;    // 10의 자리
            c = i % 10;            // 1의 자리
            if ((a - b) == (b - c)){
                count++;
            }
        }
        printf("%d", count);
    }
    return 0;
}