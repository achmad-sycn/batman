#include<iostream>
using namespace std;
int main ()
{
    string kode,nama,satuan;
    int qty;
    float harga,diskon,total,bayar;

    cout<<"Masukkan kode barang : ";cin>>kode;
    cout<<"Jumlah jual : ";cin>>qty;
    if (kode == "K-1") {
        harga = 2500;
        nama = "BUKU TULIS MEREK SIDU";
        satuan = "BUAH";
    }
    else if (kode == "K-2") {
        harga = 2250;
        nama = "BUKU TULIS MEREK MIRAGE";
        satuan = "BUAH";
    }
    else if (kode == "K-3") {
        harga = 2000;
        nama = "BUKU GAMBAR MEREK SIDU";
        satuan = "BUAH";
    }
    else if (kode == "K-4") {
        harga = 1800;
        nama = "BUKU GAMBAR MEREK SIDU";
        satuan = "BUAH";
    }
    else if (kode == "K-5") {
        harga = 1250;
        nama = "PENSIL";
        satuan = "BATANG";
    }
    else {
        "MAAF KODE BARANG SALAH !!!\n PILIH dari K-1 sampai K-5";
    }

    total = harga*qty;
    if (total > 500000) {
        diskon = 10*total/100;
    }else{
        diskon = 0;
    }

    bayar = total - diskon;
    cout<<"Nama Barang : "<<nama<<endl;
    cout<<"Satuan Barang : "<<satuan<<endl;
    cout<<"Harga Barang : "<<harga<<endl;
    cout<<"Total : "<<total<<endl;
    cout<<"Diskon : "<<diskon<<endl;
    cout<<"Bayar : "<<bayar<<endl;
}
