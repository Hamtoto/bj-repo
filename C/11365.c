#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

main(){
	char str[501] = { 0, };
	char buffer[501] = { 0, };
	int i;
	int len;
	int index = 0;
	while(1){
		gets(str);
		if(strcmp(str, "END") == 0){
			break;
	}
	len = strlen(str);
	index = 0;
	for(i = len - 1; i >= 0; i--){
		buffer[index++] = str[i];
	}
	puts(buffer);
	memset(buffer, 0, sizeof(buffer)); 
	}
}