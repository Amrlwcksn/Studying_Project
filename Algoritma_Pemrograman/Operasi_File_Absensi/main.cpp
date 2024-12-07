#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main() {
    string nama;
    string keterangan;
    int pilihan;

    //Yang di tampilkan
    cout << "=========Absensi Siswa SMANPA=========" << endl;
    cout << "1.Presensi" << endl;
    cout << "2.Cek_Absensi" << endl;
    cout << ":" << endl;
    cin >> pilihan;

    //pilihan menu 1
    if (pilihan == 1) {
        cout << "silahkan masukan nama anda untuk absensi :" << endl;
        cin >> nama;
        cout << "=====Keterangan===== "<<endl;
        cout << "[Hadir/Ijin]" << endl;
        cin >> keterangan;
        //Proses pendataan
        if (keterangan=="Hadir") {
            ofstream file;
            file.open("Siswa.txt",ios::app);
            file << "\n" << nama  << "_" << keterangan;
            file.close();
            cout << "Terimakasih sudah melakukan presensi"<<endl;
        }else if(keterangan=="Ijin") {
            ofstream file;
            file.open("Siswa.txt",ios::app);
            file << "\n" << nama << "_" << keterangan;
            file.close();
            cout << "Terimakasih sudah melakukan presensi"<<endl;
        }else {
            cerr<<"Error"<<endl;
        }

    //pilihan menu 2
    }else if(pilihan==2) {
        ifstream file;
        string data;
        string Keterangan;

        bool isfile = false;

        file.open("Siswa.txt");
        getline(file,data);
//Menampilkan data baris pertama
        cout << data << endl;

//Menampilkan data keterangan dst
        getline(file,data);
        while(!file.eof()) {
            file >> Keterangan;

            cout <<  Keterangan << endl;
        }
    }else {
        cerr<<"Error"<<endl;
    }

    cin.get();
    return 0;
}