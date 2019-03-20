	//diagonal kanan atas-kiri bawah
			for(int k=0; k<strlen(kata); k++){
				if(kata[k]==*(*(puzzle+(i+k))+(j-k))){
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
			
			//diagonal kiri bawah-kanan atas
			for(int k=0; k<strlen(kata); k++){
				if(kata[k]==*(*(puzzle+(i-k))+(j+k))){
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
