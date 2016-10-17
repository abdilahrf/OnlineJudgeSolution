#include <stdio.h>

int main(){
	
	char data[1001];
	int tanda=0,x=0;
	char quote = '"';
	while(gets(data)){
		x=0;
		
		while(data[x] != '\0'){
			if(data[x] == quote && tanda==0){
				printf("``");
				tanda = 1;
			}else if(tanda==1 && data[x] == quote){
				printf("\'\'");
				tanda = 0;
			}else{
				printf("%c",data[x]);
			}
			x++;
		}
		printf("\n");
	}
	return 0;
}