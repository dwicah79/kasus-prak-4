using namespace std;
class Proses {
	public :

		void getdata(){
			ambil_data.open("input.txt");
			bool b_us = true;
			while (!ambil_data.eof()){
				if (b_us){
				ambil_data>>b_us;
				b_us=false;
        } else{
        ambil_data>>b_uj;
				ambil_data>>pengeluaran;
			}
		}
			ambil_data.close();
		}
		
      void toFile(){
			//int totaluangbln= bulan* b_us;
			int totalkeluaruang = bulan * pengeluaran;
			int jumlah_tabungan = b_uj - totalkeluaruang;
			
			
			tulis_data.open("input.txt");
			tulis_data<<totalkeluaruang<<endl;
			tulis_data<<jumlah_tabungan;
			tulis_data.close();
		}
		
		private :
		ifstream ambil_data;
		ofstream tulis_data;
		int bulan = 12;
		int b_us;
		int b_uj;
		int pengeluaran;
	
};