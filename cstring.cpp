#include<iostream>
#include<cstring>
#include<ctime>

using namespace std;

// int main(){
//     //soal no 1
//     char karakter[100];

//     cin.get(karakter,100);

//     cout << strlen(karakter) << endl;
//     cin.ignore();
//     // soal no 2

//     char* nama;
//     char data[1000];
//     cout << "masukan bilangan biner :" << endl;
//     cin.get(data,1000);
//     long nilai = strtol(data,&nama,2);
//     cout << "ini konversi desimal =" << nilai << endl;
// }

#include <iostream>

template<typename T>

class TanggalLahir {
private:
    T tanggal;
    T bulan;
    T tahun;

public:
    TanggalLahir(T tanggal, T bulan, T tahun) : tanggal(tanggal), bulan(bulan), tahun(tahun) {}

    T hitungUmur(T hariSekarang, T bulanSekarang, T tahunSekarang) {
        T umurTahun = tahunSekarang - tahun;
        T umurBulan = bulanSekarang - bulan;
        T umurHari = hariSekarang - tanggal;

        if (umurBulan < 0) {
            umurTahun--;
            umurBulan += 12;
        }
        if (umurHari < 0) {
            umurBulan--;
            if (umurBulan < 0) {
                umurTahun--;
                umurBulan += 12;
            }
            umurHari += 30;
        }

        return umurTahun * 10000 + umurBulan * 100 + umurHari;
    }
};

int main() {
    int bulan_lahir,tanggal_lahir,tahun_lahir;
    cout << "masukann tanggal, bulan dan taun lahir" << endl;
    cin >> bulan_lahir >> tanggal_lahir >> tahun_lahir;
    TanggalLahir<int> waktu_lahir(bulan_lahir, tanggal_lahir, tahun_lahir);
    
    time_t now = time(0);
    tm* ltm = localtime(&now);
    
    int tahunSekarang = 1900 + ltm->tm_year;
    int bulanSekarang = 1 + ltm->tm_mon;
    int hariSekarang = ltm->tm_mday;

    int umur = waktu_lahir.hitungUmur(hariSekarang, bulanSekarang, tahunSekarang);

    int tahun = umur / 10000;
    int bulan = (umur / 100) % 100;
    int hari = umur % 100;

    std::cout << "Umur Anda adalah " << tahun << " tahun " << bulan << " bulan " << hari << " hari" << std::endl;

    return 0;
}


    

    