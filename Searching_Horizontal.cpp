int mencariKata(char *kata){	
	for(int i=0; i<15; i++){
		for(int j=0; j<15; j++){
    
			//horizontal kiri-kanan
			for(int k=0; k<strlen(kata); k++){
				if(kata[k]==*(*(puzzle+i)+(j+k))){
					simpan = k;
				}
				else{
					simpan != k;
					break;
				}
			}
			if(simpan==(strlen(kata)-1))
				simpanHasil = simpanHasil+1;
			else
				simpanHasil;
			simpan = cek;
			
			//horizontal kanan-kiri
			for(int k=0; k<strlen(kata); k++){
				if(kata[k]==*(*(puzzle+i)+(j-k))){
					simpan = k;
				}
				else{
					simpan != k;
					break;
				}
			}
			if(simpan==(strlen(kata)-1))
				simpanHasil = simpanHasil+1;
			else
				simpanHasil;
			simpan = cek;
     }
 }
