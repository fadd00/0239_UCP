// no 1
// float a; nyimpen bilangan desimal
// int b; nyimpen bilangan bulat tidak bisa desimal
// string nama;

// no 2
// int main(){
//     cout<<"Masukkan Nama : ";
//     cin>>nama;
//     cout<<"Masukkan Umur : ";
//     cin>>umur;
//     cout<<"Masukkan Tinggi Badan : ";
//     cin>>tb;
//     cout<<"Masukkan Berat Badan : ";
//     cin>>bb;
// }

// no 3
// for (i = 0; i < 5; i++)
// {
//     cout<<"aku"<<endl;
// }
// return 0;

// no 4
// int main() {
//   int a = 10;
//   int b = 20;

//   if (a > b) {
//     cout << "a is > b" << endl;
//   } else {
//     cout << "a is < b" << endl;
//   }
// }

// no 5
// struct DetailAlamat
// {
//     string desa;
//     string kecamatan;
// };
// struct warga
// {
//     string NoKK;
//     string NIK;
//     string NamaLengkap;
//     DetailAlamat alamat;
//     string umur;
// };

// int main(){
//     warga warga1;
//     warga1.NoKK = "1-9";
//     warga1.NIK = "1-9";
//     warga1.NamaLengkap = "asep";
//     warga1.alamat.desa = "Suka Maju";
//     warga1.umur = "20 tahun";
// 
//     cout << "Data Warga : \n\n";
//     cout << "No Kartu Keluarga   : " << warga1.NoKK << endl;
//     cout << "NIK                 : " << warga1.NIK << endl;
//     cout << "Nama Lengkap         : " << warga1.NamaLengkap << endl;
//     cout << "Desa                : " << warga1.alamat.desa << endl;
//     cout << "Umur                 : " << warga1.umur << endl;
// 
//     system("pause");
// }

#include<iostream>
using namespace std;

struct Sensor
{
    int value;
};
struct Lokasi {
  string name;
  Sensor sensor[3];
  bool apakahSehat() {
    int a = 0;
    for (int i = 0; i < 3; i++) {
      a += sensor[i].value;
    }
    int average = a / 3;
    return average <= 45; // nilai sensor lebih dari 45 
  }
};
int main() {
  Lokasi lokasi[3] = { //daftar lokasi
    {"Tanggerang", {{20}, {30}, {40}}},
    {"Bekasi", {{10}, {20}, {30}}},
    {"Jakarta", {{50}, {60}, {70}}},
  };

  int Csehat = 0;
  int  Ctidaksehat = 0;
  for (int i = 0; i < 3; i++) {
    bool apakahSehat = lokasi[i].apakahSehat();
    cout << lokasi[i].name << " | " << (apakahSehat? "Sehat" : "Tidak Sehat") << endl;
    if (apakahSehat) {
      Csehat++;
    } else {
      Ctidaksehat++;
    }
  }
    cout << "Total lokasi yang memiliki udara 'sehat': " << Csehat << endl; // total lokasi dengan udara sehat
    cout << "Total lokasi yang memiliki udara 'tidak sehat': " << Ctidaksehat << endl; // total lokasi dengan udara tidak sehat
  char response;
  cout << "Apakah akan mengulang program? (y/n): "; //mengulang program atau tidak
  cin >> response;
  if (response == 'y') {
  } else {
  }
}