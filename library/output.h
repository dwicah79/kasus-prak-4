using namespace std;

class Output{
	public :

    void toFile(){
      tulis_data.open("input.txt");
      tulis_data<<" Pengeluaran Setiap bulan \n";
      for(int i=1; i<=12; i++){
	  
      tulis_data<<" Total pengeluaran -> "<<data_file[0]<<endl;
      tulis_data<<" Sisa Uang (uang saku-pengeluaran) -> "<<data_file[1]<<endl;
      tulis_data.close();
  }
	}

	  void cetak(){
      cout<<" Pengeluaran Setiap bulan \n";
      for(int i=1; i<=12; i++){
	  
      cout<<" Total pengeluaran -> "<<data_file[0]<<endl;
      cout<<" Sisa Uang (uang saku-pengeluaran) -> "<<data_file[1]<<endl;
  }
	}
	
   void getData(){
     ambil_data.open("input.txt");
     string t;
     while(!ambil_data.eof()){
       ambil_data>>data_file[index];
       index += 1;
     }
     ambil_data.close();
   }
private :
   ifstream ambil_data;
   ofstream tulis_data;
   string data_file[30];
   int index = 0;
};
