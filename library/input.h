using namespace std;

class Input {
	private : 
			ofstream tulis_data;
			int b_us,b_uj,pengeluaran;
	public : 
		void cetak (){
			cout << "1. Uang Saku	:  \n";
			cin>>b_us;
			cout << "2. Uang jajan	: \n";
			cin>>b_uj;
      cout << "3. Pengeluaran	: \n";
			cin>>pengeluaran;
	}
			void toFile(){
				
				tulis_data.open("input.txt");
				tulis_data<<b_us<<endl;
				tulis_data<<b_uj<<endl;
        tulis_data<<pengeluaran<<endl;
				tulis_data.close();
			}				
};