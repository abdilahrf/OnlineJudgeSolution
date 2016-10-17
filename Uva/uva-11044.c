#include <stdio.h>


int main(){
	
	int a,b,tc,res;
	scanf("%d",&tc);

	for(int i=0;i<tc;i++){
		scanf("%d %d",&a,&b);
		res = (a/3)*(b/3);
		printf("%d\n", res);
	}

	return 0; 
}

