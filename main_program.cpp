/* Nama : Muhammad Azriel B.S 	(1817051024)
	  Muhammad Fajru  R 	(1857051003)
	  Muhammad Irfan 	(1817051071)
	  Noval Aditya Marlon 	(1817051019) */

#include <iostream>
#include <cstring>
using namespace std;

char pzl[15][15] =
{{'T', 'G', 'B', 'W', 'W', 'I', 'N', 'T', 'E', 'R', 'W', 'S', 'E', 'S', 'N'},
 {'A', 'A', 'U', 'N', 'T', 'T', 'M', 'M', 'H', 'F', 'O', 'O', 'D', 'N', 'B'},
 {'J', 'L', 'W', 'C', 'Q', 'L', 'D', 'Z', 'M', 'P', 'M', 'V', 'D', 'M', 'R'},
 {'A', 'S', 'A', 'G', 'M', 'Q', 'U', 'W', 'V', 'V', 'B', 'S', 'O', 'H', 'I'},
 {'B', 'W', 'P', 'L', 'O', 'T', 'A', 'N', 'A', 'D', 'T', 'P', 'G', 'N', 'C'},
 {'R', 'E', 'W', 'N', 'G', 'O', 'D', 'J', 'C', 'P', 'N', 'A', 'T', 'N', 'K'},
 {'E', 'E', 'O', 'T', 'W', 'O', 'S', 'B', 'Q', 'H', 'A', 'R', 'R', 'S', 'A'},
 {'A', 'Z', 'C', 'G', 'E', 'S', 'W', 'E', 'W', 'N', 'A', 'K', 'N', 'P', 'B'},
 {'D', 'I', 'N', 'N', 'E', 'R', 'Q', 'O', 'D', 'L', 'W', 'D', 'C', 'A', 'R'},
 {'O', 'N', 'O', 'P', 'K', 'W', 'M', 'P', 'A', 'R', 'K', 'T', 'Z', 'C', 'C'},
 {'Q', 'B', 'F', 'R', 'O', 'G', 'M', 'A', 'M', 'W', 'P', 'W', 'E', 'E', 'Y'},
 {'L', 'Q', 'Z', 'Q', 'N', 'N', 'M', 'R', 'Z', 'J', 'J', 'S', 'C', 'L', 'G'},
 {'M', 'O', 'S', 'G', 'Z', 'C', 'Z', 'D', 'T', 'D', 'B', 'O', 'O', 'T', 'O'},
 {'P', 'D', 'C', 'R', 'Z', 'M', 'S', 'N', 'G', 'R', 'D', 'N', 'R', 'P', 'Z'},
 {'O', 'H', 'N', 'K', 'Z', 'W', 'A', 'T', 'E', 'R', 'J', 'G', 'T', 'R', 'A'}};
char (*puzzle)[15] = pzl;
int simpan = 0,
    simpanHasil = 0,
    cek = 0;

void tampilPzl();
int mencariKata(char *kata);
bool hasilnya(int simpanHasil);


int main(){//Program utama
  tampilPzl();
  int banyakKata;
  char kembali;
  do{
	  cout<<"Jumlah kata yang akan di inputkan : ";
	  cin >> banyakKata;
	  char kata[banyakKata][15];
	  for(int i=0; i<banyakKata;i++){
		  cout<<"Kata ke- "<<i+1<<" : ";
		  cin >> kata[i];
		  strupr(kata[i]);
	  }

	  for(int i=0; i<banyakKata; i++){
		   mencariKata(*(kata+i));
		   hasilnya(simpanHasil);
		   simpanHasil = 0;
	  }
  cout<<"Apakah ingin mencari kata lagi ? (Y/T) " ;
  cin >> kembali;
  }while ( kembali == 'Y'|| kembali == 'y');

return 0;
}

void tampilPzl(){//menampilkan tabel puzzel
  cout << "-------------------------------------------------\n";
    for(int i=0; i<15; i++){
        cout << "|  ";
        for(int j=0; j<15; j++){
            cout << *(*(puzzle+i)+j) <<"  ";
        }
        cout << "|" << endl;
    }
 cout << "-------------------------------------------------\n";
}

int mencariKata(char *kata){//mencari kata
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
			
			//vertikal Atas-Bawah
			for(int k=0; k<strlen(kata); k++){
				if(kata[k]==*(*(puzzle+(i+k))+j)){
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

			//vertikal Bawah-Atas
			for(int k=0; k<strlen(kata); k++){
				if(kata[k]==*(*(puzzle+(i-k))+j)){
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
			
			//diagonal kiri atas-kanan bawah
			for(int k=0; k<strlen(kata); k++){
				if(kata[k]==*(*(puzzle+(i+k))+(j+k))){
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
			
			//diagonal kanan bawah-kiri atas
			for(int k=0; k<strlen(kata); k++){
				if(kata[k]==*(*(puzzle+(i-k))+(j-k))){
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
		}
	}
}

bool hasilnya(int simpanHasil){ //menampilkan ada atau tidaknya kata tersebut
    if(simpanHasil>0)
	cout << "ADA\n";
    else
	cout << "TIDAK ADA\n";
}
