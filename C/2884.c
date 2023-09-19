#include <stdio.h>

main(){
	int h,m;
	scanf("%d %d",&h,&m);
    m=m-45;
    if(m<0){
        m=60+m;
        if(h==0){
            h=23;
        }
        else h=h-1;        
    }
	printf("%d %d",h,m);
}