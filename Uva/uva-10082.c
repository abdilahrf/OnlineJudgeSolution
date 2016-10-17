    #include <stdio.h>
    #include <string.h>
     
     
    int main(){
    	char col1[14] = {'`','1','2','3','4','5','6','7','8','9','0','-','='};
    	char col2[14] = {'Q','W','E','R','T','Y','U','I','O','P','[',']','\\'};
    	char col3[14] = {'A','S','D','F','G','H','J','K','L',';','\''};
    	char col4[14] = {'Z','X','C','V','B','N','M',',','.','/'};
    	char data[10001];
     
    	while(gets(data)){
     
    		int i = strlen(data);
    		for(int x=0;x<i;x++){
    			if(data[x] == ' '){
    				printf(" ");
    			}else if(data[x] >= 'A' && data[x] <= 'Z'){
    				for(int c=0;c<13;c++){
    					if(c !=0 ){
     
    						if(data[x] == col2[c]) printf("%c",col2[c-1]);
    						if(data[x] == col3[c]) printf("%c",col3[c-1]);
    						if(data[x] == col4[c]) printf("%c",col4[c-1]);
    					}
    				}	
    			}else if(data[x] >= 'a' && data[x] <= 'z'){
    				for(int c=0;c<13;c++){
    					if(c !=0 ){
    						if(data[x] == col2[c]+32) printf("%c",col2[c-1]+32);
    						if(data[x] == col3[c]+32) printf("%c",col3[c-1]+32);
    						if(data[x] == col4[c]+32) printf("%c",col4[c-1]+32);
    					}
    				}
    			}else{
    				for(int c=0;c<13;c++){
    					if(c !=0 ){
    						if(data[x] == col1[c]) printf("%c",col1[c-1]);
    						if(data[x] == col2[c]) printf("%c",col2[c-1]);
    						if(data[x] == col3[c]) printf("%c",col3[c-1]);
    						if(data[x] == col4[c]) printf("%c",col4[c-1]);
    					}
    				}
    			}
    		}
        printf("\n");
    	}
     
     
    	return 0;
    }