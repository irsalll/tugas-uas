/*=======================================
Nama		: Irsal Al Kaustar Sujana
Kelas		: TI C Reguler
NIM			: 2230511131
Mata Kuliah : Dasar Pemograman
=======================================
*/
# include <iostream>
using namespace std;

#define sewalapanganfutsal 150000
const int diskonharga = 50000 ;
int main ()
{
	char tanggal[2];
	float jumlah, jam;
	int total = 0;
	int array[10]={150000,300000,450000};
	int c=0;
	
	cout<<" | ================================= \n";
	cout<<" | Main 2 jam dapat potongan harga | \n";
	cout<<" | ================================= \n";
	
	for (int c=0; c<4; c++) {
		cout<<endl;
		cout<<array[c];
		
	}
	
	cout<<endl;
	cout<<"Masukan Tanggal Sewa Lapangan : "; cin>>tanggal;
	cout<<"Masukan Tanggal Jam Sewa Lapangan : "; cin>>jam;
	cout<<endl;
	
	
	if (jam>=2){
		jumlah = jam * sewalapanganfutsal;
		total = jumlah - diskonharga;
		
		cout<<" total pembayaran = "<<total;
		cout<<endl;
	} else{
		total = jam * sewalapanganfutsal;
		cout<<" Total Pembayaran = "<<total;
		cout<<endl;
		cout<<" *Akan hemat 50000 jika anda bermain 2 jam"<<endl;
		cout<<endl;
		
 	}
 	do {
 		cout<<"|| ========================================|| \n";
 		cout<<" Lapang Futsal 666, selamat bermain  \n";
 		cout<<"|| ========================================|| \n";
 		c++;
 		
 		
 	}while (c<3);
 	
 	return 0;
 	
}
