/*
Nama          : Ahmad Amirul Wicaksono
NPM           : 24340013
Judul Program : (Record/Struct) Toko Komputer
*/


#include <iostream>
using namespace std;

struct Barang {
    string nama;
    int harga;
    int select;
};

int main() {

    //nama barang
    Barang barang1;
    barang1.nama = "keyboard";
    barang1.harga =350000;
    barang1.select = 1;

    Barang barang2;
    barang2.nama = "mouse";
    barang2.harga =90000;
    barang2.select = 2;

    Barang barang3;
    barang3.nama ="mousepad";
    barang3.harga =40000;
    barang3.select = 3;

    Barang barang4;
    barang4.nama ="SSD_128Gb";
    barang4.harga =120000;
    barang4.select = 4;

    Barang barang5;
    barang5.nama ="SSD_256Gb";
    barang5.harga =200000;
    barang5.select = 5;

    //keranjang
    int keranjang;
    int jumlah;
    int total;

    //toko display
    cout << "=====KOMPUTERKU=====" << endl;
    cout <<"1."<< barang1.nama <<" = "<< barang1.harga << endl;
    cout <<"2."<< barang2.nama <<" = "<< barang2.harga << endl;
    cout <<"3."<< barang3.nama <<" = "<< barang3.harga << endl;
    cout <<"4."<< barang4.nama <<" = "<< barang4.harga << endl;
    cout <<"5."<< barang5.nama <<" = "<< barang5.harga << endl;
    cout <<"====================" << endl;

    cout <<"Keranjang = "<< endl;
    cin >> keranjang;


    //proses penjumlahan barang yang dibeli (TOTAL)
    //Keyboard
    if (keranjang == barang1.select) {
        cout <<"Keranjang = "<< barang1.nama << endl;
        cout <<"Jumlah = " << endl;
        cin >> jumlah;
        total = jumlah * barang1.harga;
        cout <<"===================="<< endl;
        cout << "Item   : "<< barang1.nama <<", harga : Rp."<< barang1.harga <<  endl;
        cout << "Jumlah : "<< jumlah <<  endl;
        cout << "Total  : Rp."<< total << endl;
        cout <<"====Terimakasih===="<< endl;
    }
    //Mouse
    else if (keranjang == barang2.select) {
        cout <<"Keranjang = "<< barang2.nama << endl;
        cout <<"Jumlah = " << endl;
        cin >> jumlah;
        total = jumlah * barang2.harga;
        cout <<"===================="<< endl;
        cout << "Item   : "<< barang2.nama <<", harga : Rp."<< barang2.harga <<  endl;
        cout << "Jumlah : "<< jumlah <<  endl;
        cout << "Total  : Rp."<< total << endl;
        cout <<"====Terimakasih===="<< endl;
    }
    //Mousepad
    else if (keranjang == barang3.select) {
        cout <<"Keranjang = "<< barang3.nama << endl;
        cout <<"Jumlah = " << endl;
        cin >> jumlah;
        total = jumlah * barang3.harga;
        cout <<"===================="<< endl;
        cout << "Item   : "<< barang3.nama <<", harga : Rp."<< barang3.harga <<  endl;
        cout << "Jumlah : "<< jumlah << endl;
        cout << "Total  : Rp."<< total << endl;
        cout <<"====Terimakasih===="<< endl;
    }
    //SSD_128Gb
    else if (keranjang == barang4.select) {
        cout <<"Keranjang = "<< barang4.nama << endl;
        cout <<"Jumlah = " << endl;
        cin >> jumlah;
        total = jumlah * barang4.harga;
        cout <<"===================="<< endl;
        cout << "Item   : "<< barang4.nama <<", harga : Rp."<< barang4.harga <<  endl;
        cout << "Jumlah : "<< jumlah << endl;
        cout << "Total  : Rp."<< total << endl;
        cout <<"====Terimakasih===="<< endl;
    }
    //SSD_256Gb
    else if (keranjang == barang5.select) {
        cout <<"Keranjang = "<< barang5.nama << endl;
        cout <<"Jumlah = " << endl;
        cin >> jumlah;
        total = jumlah * barang5.harga;
        cout <<"===================="<< endl;
        cout << "Item   : "<< barang5.nama <<", harga : Rp."<< barang5.harga <<  endl;
        cout << "Jumlah : "<< jumlah << endl;
        cout << "Total  : Rp. "<< total << endl;
        cout <<"====Terimakasih===="<< endl;
    }else{
        cerr <<"Item yang anda cari ("<<keranjang<<"?!) tidak tersedia"<< endl;
    }
}