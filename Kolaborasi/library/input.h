using namespace std;

class Input{
    public :
        void cetak(){
          cout << "Aplikasi Penjualan Ayam \n";
    			cout << "Menu yang tersedia : \n";
    			cout << "1) Ayam Geprek  Rp. 21000 \n\n";
    			cout << "2) Ayam Goreng  RP. 17000 \n\n";
          cout << "3) Udang Goreng RP. 19000 \n\n";
          cout << "4) Cumi Goreng  RP. 20000 \n\n";
          cout << "5) Ayam Bakar   RP. 25000 \n\n";
          cout << "================================ \n\n";
    			cout << "Pesan Ayam Geprek  -> "; cin >> bnyk_aymGprk;
    			cout << "Pesan Ayam Goreng  -> "; cin >> bnyk_aymGr;
          cout << "Pesan Udang Goreng -> "; cin >> bnyk_udGr;
          cout << "Pesan Cumi Goreng  -> "; cin >> bnyk_cmGr;
          cout << "Pesan Ayam Bakar   -> "; cin >> bnyk_aymBk;
          cout << "Masukkan Jarak Rumah Anda : "; cin >> jrk;
		}	

		void toFile(){
			tulis_data.open("../pra_data/input.txt");
      tulis_data << bnyk_aymGprk << endl;
      tulis_data << bnyk_aymGr << endl;
      tulis_data << bnyk_udGr << endl;
			tulis_data << bnyk_cmGr << endl;
			tulis_data << bnyk_aymBk << endl;
      tulis_data << jrk;
			tulis_data.close();
		}

	private : 
		ofstream tulis_data;
		int bnyk_aymGprk;
    int bnyk_aymGr;
    int bnyk_udGr;
    int bnyk_cmGr;      
    int bnyk_aymBk;
    int jrk;
};
