#include<iostream>
using namespace std;
int main() {
    int pilihan;
    float luas;
    cout<<"Pilih bangun datar yang ingin dicari luasnya"<<endl;
    cout<<"1. Persegi"<<endl;
    cout<<"2. Persegi Panjang"<<endl;
    cout<<"3. Segitiga"<<endl;
    cout<<"Masukkan Pilihan (1/2/3)"<<endl;
    cin>>pilihan;

   switch (pilihan) {
    case 1: {
        int sisi;
     cout<<"Masukkan panjang sisi Persegi!"<<endl;
     cout<<"Panjang Sisi: ";
     cin>>sisi;
     luas= sisi*sisi;
     cout<<"Luas Persegi: "<<luas<<endl;
     break;
   }
    case 2: {
        int panjang,lebar;
     cout<<"Masukkan Panjang dan Lebar Persegi Panjang!"<<endl;
     cout<<"Panjang: ";
     cin>>panjang;
     cout<<"Lebar: ";
     cin>>lebar;
     luas= panjang*lebar;
     cout<<"Luas Persegi Panjang: "<<luas<<endl;
     break;
   }
    case 3: {
        int alas,tinggi;
     cout<<"Masukkan panjang Alas dan Tinggi Segitiga!"<<endl;
     cout<<"Alas: ";
     cin>>alas;
     cout<<"Tinggi: ";
     cin>>tinggi;
     luas= 0.5*alas*tinggi;
     cout<<"Luas Segitiga: "<<luas<<endl;
     break;
    }
   }
 return 0;
}
