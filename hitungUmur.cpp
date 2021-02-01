#include<iostream>
using namespace std;
int main ()
{
    string nama,kategori;
    int thnLahir,thnSekarang,umur;
    float harga,diskon,total,bayar;

    cout<<"Ketikkan Nama Anda : ";cin>>nama;
    cout<<"Tahun Kelahiran Anda : ";cin>>thnLahir;
    cout<<"Tahun Sekarang : ";cin>>thnSekarang;
    umur = thnSekarang-thnLahir;
    if (umur <= 5) {
        kategori = "BALITA";
    }
    else if (umur <= 10) {
        kategori = "ANAK-ANAK";
    }
    else if (umur <= 17) {
        kategori = "ABG";
    }
    else if (umur <= 25) {
        kategori = "REMAJA";
    }
    else if (umur <= 35) {
        kategori = "DEWASA";
    }
    else if (umur <= 50) {
        kategori = "BAPAK-BAPAK / IBU-IBU";
    }
    else {
        kategori = "KAKEK-KAKEK / NENEK";
    }
    cout<<"Umur Anda Kurang Lebih "<<umur<<" Tahun"<<endl;
    cout<<"Termasuk Kategori "<<kategori<<endl;
}
