#include <stdio.h>
#include <string.h>

int main(){
	char data[10001];
	int x=1;
	while(scanf("%s",data)){
		if(strcmp(data,"#") == 0 ) break;
		if(strcmp(data,"HELLO") == 0) printf("Case %d: %s\n", x, "ENGLISH");
		else if(strcmp(data,"HOLA") == 0) printf("Case %d: %s\n", x, "SPANISH");
		else if(strcmp(data,"HALLO") == 0) printf("Case %d: %s\n", x, "GERMAN");
		else if(strcmp(data,"BONJOUR") == 0) printf("Case %d: %s\n", x, "FRENCH");
		else if(strcmp(data,"CIAO") == 0) printf("Case %d: %s\n", x, "ITALIAN");
		else if(strcmp(data,"ZDRAVSTVUJTE") == 0) printf("Case %d: %s\n", x, "RUSSIAN");
		else printf("Case %d: %s\n", x, "UNKNOWN");
		x++;
	}

	return 0;
}