using namespace std;

class Proses{
	public :
		void cetak(){
			cout << "sk 3\n";
		}

		void getData(){
			ambil_data.open("../dummy/proses_input.txt");
			bool ayam_geprek = true;
			while(!ambil_data.eof()){
				if (ayam_geprek){
					ambil_data >> bnyk_aymGpr;
          ayam_geprek = false
				}
        else if (ayam_goreng){
					ambil_data >> bnyk_aymGpr;
          ay
				}
        else if (udang_goreng){
					ambil_data >> bnyk_udGr;
				}
				else if (cumi_goreng){
					ambil_data >> bnyk_cmGr;
        else {
          ambil_data >> bnyk_aymBk;
				}
			}
			//ambil_data.close();
		

		void toFile(){
			int total = (hrg_aymGpr * bnyk_aymGpr) + (hrg_aymGr * bnyk_aymGr) + (hrg_udGr * bnyk_udGr) + (hrg_cmGr * bnyk_cmGr) + (hrg_aymBk * bnyk_aymBk);
      if (jarak < 3){
        ongkir = 15000;
        }else{ 
        ongkir = 25000;
        }
			if (total>=25000 && total<=50000){
		    ongkir -= 3000;
        }
      else if(total>50000 && total<=150000){
		    ongkir -= 5000;
		    diskon = (total*15)/100;	
	}
	    else if(total>150000){
		    ongkir -= 8000;
		    diskon = (total*35)/100;
	}
	    (t2 = (total + ongkir - diskon));



			tulis_data.open("../dummy/proses_input.txt");
			tulis_data << total << endl;
      tulis_data << jarak << endl;      
			tulis_data << diskon << endl;
			tulis_data << t2 << endl;
			tulis_data << bnyk_aymGpr << endl;
			tulis_data << bnyk_aymGr <<endl;
      tulis_data << bnyk_udGr <<endl;
      tulis_data << bnyk_cmGr <<endl;
      tulis_data << bnyk_aymBk;
			tulis_data.close();
		}

	private :
		ifstream ambil_data;
		ofstream tulis_data;
    int bnyk_aymGpr;
		int bnyk_aymGr;
    int bnyk_udGr;
    int bnyk_cmGr;
		int bnyk_aymBk;
		int hrg_aymGpr = 21000;
	  int hrg_aymGr  = 17000;
	  int hrg_udGr   = 19000;
	  int hrg_cmGr   = 20000;
	  int hrg_aymBk  = 25000;
    int total;
    int t2;
    int jarak;
    int ongkir;
    int diskon;
};