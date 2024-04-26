#include<iostream>
#include<ctime>

using namespace std;

template<typename T>

class TanggalLahir {
private:
    T tanggal;
    T bulan;
    T tahun;

public:
    TanggalLahir(T tanggal, T bulan, T tahun){
        this->tanggal = tanggal;
        this->bulan = bulan;
        this->tahun = tahun;
    }

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
    T cekTahunKabisat() {
        if ((tahun % 4 == 0 && tahun % 100 != 0) || (tahun % 400 == 0)) {
            return true;
        } else {
            return false;
        }
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

    cout << "Umur Anda adalah " << tahun << " tahun " << bulan << " bulan " << hari << " hari" << endl;
    cout << "Apakah tahun kabisat? " <<  waktu_lahir.cekTahunKabisat() << endl;

    return 0;
}