#include <stdio.h>

int sumNumber(int n) {
  static int sum = 0; 
  if (n == 0) return 0;
  sum = n%10 + sumNumber(n/10);
  if(sum>=10) sum = sumNumber(sum);

  return sum;
}

int main(){
	int in,base_case,res;
	while(scanf("%d",&in) != 0){
		if(in == 0) break;
		res=0;
		if(in<10) printf("%d\n",in);
		else if(in >= 10){
			int a=in;
			res = sumNumber(a);
			printf("%d\n",res);
		}

	}
	return 0;
}

