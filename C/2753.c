#include <stdio.h>

main(){
	int year;
	scanf("%d",&year);
	
	if(year == year/4*4){
        if(year == year/400*400){
            printf("1");
        }
        else if(year == year/100*100){
            printf("0");
        }
        else printf("1");
    }
	else printf("0");

}