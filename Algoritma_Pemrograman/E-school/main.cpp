/*
Nama           : Ahmad Amirul Wicaksono
NPM            : 24340013
Nama project   : Algoritma Pemrograman Absensi Sekolah
Mata Kuliah    : Algoritma Pemrograman
Dosen Pengampu : Muhammad Prayito, M.Pd,
*/

#include<iostream>
#include<fstream>
#include<string>

using namespace std;

void Presensi_Matematika(){//fungsi presensi Matematika
    int keterangan;//input keterangan
    string nama;//input nama&nis
    int menu_utama=1;

    cout<<"Nama_NIS: ";cin>>nama;
    cout<<"Silahkan isikan keterangan anda:"<<endl;
    cout<<"1.Hadir"<<endl;
    cout<<"2.ijin"<<endl;
    cout<<">> ";cin>>keterangan;

    if(keterangan==1){/*jika 1=Hadir,maka akan membuka file presensi_mtk,
    dan menulisnya sesuai keterangan*/
        ofstream file;
        file.open("Presensi_mtk.txt", ios::app);
        file <<"\n"<<nama<<": hadir";
        file.close();
        cout<<"Sukses melakukan Presensi"<<endl;
        
    }else if (keterangan==2){/*jika 2=ijin,maka akan membuka file presensi_mtk,
    dan menulisnya sesuai keterangan*/
        ofstream file;
        file.open("Presensi_mtk.txt", ios::app);
        file <<"\n"<<nama<<": ijin";
        file.close();
        cout<<"Sukses melakukan Presensi"<<endl;
    }   
}
void Presensi_Sejarah(){
    int keterangan;
    string nama;

    cout<<"Nama_NIS: ";cin>>nama;
    cout<<"Silahkan isikan keterangan anda:"<<endl;
    cout<<"1.Hadir"<<endl;
    cout<<"2.ijin"<<endl;
    cout<<">> ";cin>>keterangan;

    if(keterangan==1){
        ofstream file;
        file.open("Presensi_sejarah.txt", ios::app);
        file <<"\n"<<nama<<": hadir";
        file.close();
        cout<<"Sukses melakukan Presensi"<<endl;

    }else if (keterangan==2){
        ofstream file;
        file.open("Presensi_sejarah.txt", ios::app);
        file <<"\n"<<nama<<": ijin";
        file.close();
        cout<<"Sukses melakukan Presensi"<<endl;
    }   

}
void Presensi_Tik(){
    int keterangan;
    string nama;

    cout<<"Nama_NIS: ";cin>>nama;
    cout<<"Silahkan isikan keterangan anda:"<<endl;
    cout<<"1.Hadir"<<endl;
    cout<<"2.ijin"<<endl;
    cout<<">> ";cin>>keterangan;

    if(keterangan==1){
        ofstream file;
        file.open("Presensi_tik.txt", ios::app);
        file <<"\n"<<nama<<": hadir";
        file.close();
        cout<<"Sukses melakukan Presensi"<<endl;

    }else if (keterangan==2){
        ofstream file;
        file.open("Presensi_tik.txt", ios::app);
        file <<"\n"<<nama<<": ijin";
        file.close();
        cout<<"Sukses melakukan Presensi"<<endl;
    }   
}

void menu_utama(){
    int pilih_menu;
    int pilih_mata_pelajaran;
    int pilih_mata_pelajaran_menu;
    int pilih_Elibrary;
    int pilih_buku;
    int kembali;

    cout<<"======================="<<endl;
    cout<<"1.Mata Pelajaran"<<endl;
    cout<<"2.E-librrary"<<endl;
    cout<<"3.Exit"<<endl;
    cout<<">> ";cin>>pilih_menu;

    switch (pilih_menu)
    {
    case 1:
        cout<<"==Mata Pelajaran=="<<endl;
        cout<<"1.Matematika"<<endl;
        cout<<"2.Sejarah"<<endl;
        cout<<"3.TIK"<<endl;
        cout<<"4.kembali"<<endl;
        cout<<">> ";cin>> pilih_mata_pelajaran;

        switch (pilih_mata_pelajaran)
        {
        case 1:
            cout<<"==Matematika=="<<endl;
            cout<<"1.Absensi"<<endl;
            cout<<"2.Materi"<<endl;
            cout<<"3.Tugas"<<endl;
            cout<<"4.kembali"<<endl;
            cout<<">> ";cin>>pilih_mata_pelajaran_menu;

                switch (pilih_mata_pelajaran_menu)
                {
                case 1:
                    Presensi_Matematika();
                break; 
                case 2:
                    cout<<"------------------------------------------"<<endl;
                    cout<<"Materi belum di upload oleh guru pengampu"<<endl;
                    cout<<"------------------------------------------"<<endl;
                    cout<<"1.kembali"<<endl;
                    cout<<">> ";cin>>kembali;
                    if(kembali ==1){
                        menu_utama();
                    }else{
                        menu_utama();
                    }
                break;  
                case 3:
                    cout<<"------------------------------------------"<<endl;
                    cout<<"Mengerjakan latihan soal pada modul di bawah ini"<<endl;
                    cout<<"Matrix.pdf"<<endl; 
                    cout<<"------------------------------------------"<<endl;
                    cout<<"1.kembali"<<endl;
                    cout<<">> ";cin>>kembali;
                    if(kembali ==1){
                        menu_utama();
                    }else{
                        menu_utama();
                    }
                break;
                case 4:
                    menu_utama();
                break;
                }

        break;
        case 2:
            cout<<"==Sejarah=="<<endl;
            cout<<"1.Absensi"<<endl;
            cout<<"2.Materi"<<endl;
            cout<<"3.Tugas"<<endl;
            cout<<"4.kembali"<<endl;

            cout<<">> ";cin>>pilih_mata_pelajaran_menu;
            
                switch (pilih_mata_pelajaran_menu)
                {
                case 1:
                    Presensi_Sejarah();
                break;
                case 2:
                    cout<<"------------------------------------------"<<endl;
                    cout<<"Materi belum di upload oleh guru pengampu"<<endl;
                    cout<<"------------------------------------------"<<endl;
                    cout<<"1.kembali"<<endl;
                    cout<<">> ";cin>>kembali;
                    if(kembali ==1){
                        menu_utama();
                    }else{
                        menu_utama();
                    }
                break;  
                case 3:
                    cout<<"------------------------------------------"<<endl;
                    cout<<"Meringkas pada modul di bawah ini"<<endl;
                    cout<<"teori revolusi manusia.pdf"<<endl; 
                    cout<<"------------------------------------------"<<endl;
                    cout<<"1.kembali"<<endl;
                    cout<<">> ";cin>>kembali;
                    if(kembali ==1){
                        menu_utama();
                    }else{
                        menu_utama();
                    }
                break;
                case 4:
                    menu_utama();
                break;
                }
        
        break;
        case 3:
            cout<<"==TIK=="<<endl;
            cout<<"1.Absensi"<<endl;
            cout<<"2.Materi"<<endl;
            cout<<"3.Tugas"<<endl;
            cout<<"4.kembali"<<endl;

            cout<<">> ";cin>>pilih_mata_pelajaran_menu;
                switch (pilih_mata_pelajaran_menu)
                {
                case 1:
                    Presensi_Tik();
                break;
                case 2:
                    cout<<"------------------------------------------"<<endl;
                    cout<<"Materi belum di upload oleh guru pengampu"<<endl;
                    cout<<"------------------------------------------"<<endl;
                    cout<<"1.kembali"<<endl;
                    cout<<">> ";cin>>kembali;
                    if(kembali ==1){
                        menu_utama();
                    }else{
                        menu_utama();
                    }
                break; 
                case 3:
                    cout<<"------------------------------------------"<<endl;
                    cout<<"Mengerjakan latihan soal mada modul di bawah ini"<<endl;
                    cout<<"Dasar-dasar pemrograman.pdf"<<endl; 
                    cout<<"------------------------------------------"<<endl;
                    cout<<"1.kembali"<<endl;
                    cout<<">> ";cin>>kembali;
                    if(kembali ==1){
                        menu_utama();
                    }else{
                        menu_utama();
                    }
                break;
                case 4:
                    menu_utama();
                break;        
                }
        break;
        case 4:
            menu_utama();
        break;
        }
    break;
    
    case 2:
        cout<<"==E-Library=="<<endl;
        cout<<"1.meminjam buku"<<endl;
        cout<<"2.kembali"<<endl;
        cout<<">> ";cin>>pilih_Elibrary;
        switch(pilih_Elibrary){
            case 1:
                int namapinjam;
                cout<<"Buku yang tersedia"<<endl;
                cout<<"1.modul pembelajaran Matematika"<<endl;
                cout<<"2.Filosofi Teras"<<endl;
                cout<<"3.The Psychology of Money"<<endl;
                cout<<"4.kembali"<<endl;
                cout<<">> ";cin>>pilih_buku;
                switch(pilih_buku){
                    case 1:
                        cout<<"Masukan Nama:"<<endl;
                        cout<<">> ";cin>>namapinjam;
                        cout<<"------------------------------------------"<<endl;
                        cout<<"Silahkan ambil buku di perpustakaan"<<endl;
                        cout<<"dan meunjukan kode berikut: #14mtk"<<endl;
                        cout<<"------------------------------------------"<<endl;   
                    break;
                    case 2:
                        cout<<"Masukan Nama:"<<endl;
                        cout<<">> ";cin>>namapinjam;
                        cout<<"------------------------------------------"<<endl;
                        cout<<"Silahkan ambil buku di perpustakaan"<<endl;
                        cout<<"dan meunjukan kode berikut: #67flsftrs"<<endl;
                        cout<<"------------------------------------------"<<endl;
                    break;
                    case 3:
                        cout<<"Masukan Nama:"<<endl;
                        cout<<">> ";cin>>namapinjam;
                        cout<<"------------------------------------------"<<endl;
                        cout<<"Silahkan ambil buku di perpustakaan"<<endl;
                        cout<<"dan meunjukan kode berikut: #99tpmny"<<endl;
                        cout<<"------------------------------------------"<<endl;
                    break;
                    case 4:
                        menu_utama();
                    break;
                }

            break;
            case 2:
                menu_utama();
            break;
        }
    break;
    case 3:
        exit;
    }
}

void menu_regis(){
    int nis[]={24340013,24340014};//Data NIS ditampung pada Array
    int inputnis;//inputan nis
    bool ketemu=false;//triger nis jika ketemu/tidak

    cout<<"Submit to acces menu"<<endl;
    cout<<"NIS: ";cin >> inputnis;

        for(int i=0;i < sizeof(nis)/sizeof(nis[0]);i++){
            if(inputnis==nis[i]){
                ketemu=true; /*nilai ketemu menjadi true, karena nis 
                yang di input sesuai dengan data nis di array*/
            }
        }
        if (ketemu){//jikaketemu = true, maka akan lanjut ke fungsi menu_utama
            menu_utama();
        }else{//jika ketemu = false, maka program akan mengulang pada menu_regis
           cout<<"NIS kamu salah"<<endl;
           menu_regis();
        }
}

int main(){
    cout<<"==Welcome to E-School=="<<endl;
    menu_regis();
}