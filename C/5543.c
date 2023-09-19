#include <stdio.h>

main(){
    int m[5],i,tmp;
    for(i=0;i<5;i++){
        scanf("%d",&m[i]);
        tmp=m[0];
    }
    for(i=0;i<3;i++){
        if(tmp>m[i]) 
            tmp=m[i];        
    }
    if(m[3]<m[4]) tmp=tmp+m[3];
    else tmp=tmp+m[4];
    printf("%d",tmp-50);
}