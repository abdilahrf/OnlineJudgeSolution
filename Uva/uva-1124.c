#include <stdio.h>


char data[10000];

int main() {
	while(gets(data)){
		printf("%s\n",data);
	}
	return 0;
}