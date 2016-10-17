#include <stdio.h>


int main(){
	
	int tc,tk,ls[10000],start=999,res;

	scanf("%d",&tc);
	for(int x=0;x<tc;x++){
		//reset res
		res=0;
		//jumlah toko yang mau di kunjugi
		scanf("%d",&tk);
		for(int x=0;x<tk;x++){
			//integer position on long street	
			scanf("%d",&ls[x]);

			//ambil meter paling kecil buat di jadiin start
			if(start > ls[x]) start = ls[x];
		}

		// sorting array
		// 24 13 89 37
		// 13 24 37 89
		for(int a=0;a< tk-1;a++){
			for(int x=0;x<tk-a-1;x++){
				if(ls[x] > ls[x+1]) {
					int temp = ls[x];
					ls[x] = ls[x+1];
					ls[x+1] = temp;
				}
			}
		}

		// calculate 
		for(int x=0;x<tk-1;x++){
			res += ls[x+1] - ls[x];
		}

		printf("%d\n",res*2);
	}

	return 0;
}
