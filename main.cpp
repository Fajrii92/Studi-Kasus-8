#include <iostream>
using namespace std;

class array{
  private:
  string lulus[4][12];
  int kode[12];
  int jumlah_data,temp;
  string temp1,temp2,temp3,temp4,temp5;
  public:
  void input();
  void proses();
  void output();
  void bubblesort();
};

void array::input(){
  cout << "Masukkan Jumlah Data : "; 
  cin>>jumlah_data;
  cout << "================================\n";
  for(int i=0;i<jumlah_data;i++){
    for(int j=0;j<5;j++){
      if(j==0){
        cout<<"Masukkan Tahun Prodi : ";
        cin.ignore();
        getline(cin,lulus[i][j]);
      }
      else if(j==1){
        cout<<"Mahasiswa Teknik Komputer : ";
        cin>>lulus[i][j];
      }
      else if(j==2){
        cout<<"Mahasiswa Teknik Elektro : ";
        cin>>lulus[i][j];
      }
      else if(j==3){
        cout<<"Mahasiswa Teknik Pemesinan : ";
        cin>>lulus[i][j];
      }
      else if(j==4){
        cout<<"Rata-rata Kelulusan : ";
        cin>>lulus[i][j];
        cout<<"------------------------------\n";
      }
    }
  }
}

void array::bubblesort(){
  for(int i=0; i<jumlah_data; i++){
    for(int j=0; j<jumlah_data-i-1; j++){
      if(kode[j]>kode[j+1]){

