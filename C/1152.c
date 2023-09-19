#include <stdio.h>

main(){
	char str[1000001];
	int count = 0;
	int i = 0;

	scanf("%[^\n]",&str);
	while(str[i]!='\0'){
		if(str[i]==' ')	count++;
		i++;
	}
	if(str[0]==' ') count--;
	if(str[i-1]==' ') count--;

	printf("%d",count+1);
}