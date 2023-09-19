#include <stdio.h>
 
int main(){
    int a, b, c, d,e, res, sum=0,num;
    int p[10000] = {0,};
 
    for(num=1; num<10000; num++){
        //find self number
		a=num%10;
		b=(num%100)/10;
		c=(num%1000)/100;
		d=(num%10000)/1000;
		e=num/10000;
        res = a + b + c + d + e + num;
         
        if(res < 10000){
            p[res] = 1;
        }
         
        //make sum
        if(p[num] == 0){
            printf("%d \n", num);
            sum += num;
        }
    }
     
    return 0;
}