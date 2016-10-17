#include <stdio.h>

int main(void) {
	int a,b;
	
	// Ketika stdin belum EOF
	while(scanf("%d %d",&a,&b) != EOF){
		int res=0;
		int currA=a;
		int currB=b;
		
		//cek jika b lebih besar dari a
		if (currA > currB) {
			currA = b;
			currB = a;
		} 
				
		//Looping dari a sampai b
		for(int x=currA;x<=currB;x++){
			// hitung Cycle lenght untuk setiap x
			int current = x;
			int currentRes = 0;
			
			// jika current masih lebih besar dari 1 lanjutkan operasi
			while(current > 1){
				if(current % 2 == 0) current = current / 2;
				else current = 3 * current + 1; 
				currentRes++;
			}
			
			if (currentRes > res) res = currentRes;
			
		}
		printf("%d %d %d\n",a,b,res+1);
	}
	
	
	return 0;
}
