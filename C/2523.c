#include <stdio.h>
int main(){
    int t,i,j,h;
    scanf("%d",&t);
    t=2*t-1;
    for(i=0;i<t/2+1;i++){
        for(j=0;j<(i+1);j++){
            printf("*");
        }
        printf("\n");
    }
    h=t-(t/2+1);
    for(i=t/2+1;i<t;i++){
        for(j=0;j<h;j++){
            printf("*");
        }
        h--;
        printf("\n");
    }
    return 0;
}