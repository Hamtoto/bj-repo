#include <stdio.h>

int main() {
	int a = 0, num = 0, score[1000] = {0}, sum = 0, count = 0;
	
	scanf("%d", &a);
	for(int i = 0; i < a; i ++){
		scanf("%d", &num);
		for(int i =0; i < num; i++){
			scanf("%d", &score[i]);
			sum += score[i];
		}
		double avg = (double)sum / num;
		sum = 0;
		count = 0;
		for(int i = 0; i < num; i++){
			if(score[i] > avg){
				count++;
				}
		}	
		printf("%.3lf%%\n", (double)count *100 / num);
	}
}