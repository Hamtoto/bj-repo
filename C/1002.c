#include <stdio.h>
#include <math.h>

int main() {
	int i, t, x1, y1, r1, x2, y2, r2, count, tmp;
	double d;

	scanf("%d", &t);// 테스트 케이스 개수 입력받음

	for (i = 0; i < t; i++) { // for 문으로 케이스 개수 횟수만큼 돌림
		scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2); // 데이터값 입력받음 (x y 좌표 반지름순)
		if(x1==x2 && y1==y2){  //중심점이 같은경우
			if(r2==r1){
				count = -1;
			}
			else { //중심점은 같은데 안만나는경우
				count = 0;
			}
		}	

		else{
			if(r1<r2){//크기조정
				tmp = r2;
				r2 =r1;
				r1 = tmp;
			}
			d = sqrt(pow((double)(x1-x2),2) + pow((double)(y1-y2),2)); // 두점사이의 거리를 계산, 루트((x2-x1)^ + (y2-y1)^)
			if(d>r1-r2 && d<r1+r2){
				count=2;
			}
			else if(d==r1+r2 || d==r1-r2){
				count = 1;
			}
			else{
				count = 0;
			}
		}
		printf("%d\n",count);
	}
	return 0;
}