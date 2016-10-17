#include <stdio.h>
#include <string.h>

int main(){
	char command[100];
	int temp,res=0,tc;

	scanf("%d",&tc);
	for(int x=0;x<tc;x++){
		
		scanf("%s",command);
		
		if(strstr(command, "donate")!= NULL){
			scanf("%d",&temp);
			res += temp;
			temp=0;
		}else if(strstr(command, "report")!= NULL){
			printf("%d\n",res);
		}
	}

	return 0;
}
