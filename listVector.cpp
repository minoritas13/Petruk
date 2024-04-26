#include <iostream>
#include <vector>
using namespace std;

class daftar{
    private :
        vector<string> barang;
        
    public :
        daftar(){
            barang = {"beras","minyak gorang","sabun"};
        }
        
        daftar(vector<string> barang){
            this->barang = barang;
        }
    
    void setBarang(vector<string> barang){
        this->barang = barang;
    }
    
    vector<string> getBarang(){
        return barang;
    }
    
    void tambahAkhir(string nama){
        barang.push_back(nama);
    }
    
    void hapusAkhir(){
        barang.pop_back();
    }
    
    void tambahBarang(int urutan, string nama){
        barang.insert(barang.begin()+urutan-1,nama);
    }
    
    void hapusBarang(int urutan){
        barang.erase(barang.begin()+urutan-1);
    }
    
    void daftarBaru(string* nama, int jumlah){
        barang.assign(nama,nama+jumlah);
    }
    
    void hapusDaftar(){
        if(barang.empty()!=1){
            barang.clear();
        }else{
            cout << "Daftar sudah kosong\n";
        }
    }
    
    void cetakDaftar(){
        cout << "Daftar barang Aca :\n";
        for (int i = 0; i < barang.size(); i++){
            cout << i+1 << ". " << barang[i] << "\n";
        }
    }
};

int main()
{
    daftar d;
    
    daftar d2({"hp","dompet"});
    
    d.setBarang({"baju","celana","kaos kaki"});
    
    d.tambahBarang(3,"hp");
    
    d.hapusBarang(2);
    
    string nama[] = {"hp","dompet","earphone"};
    int jumlah = sizeof(nama)/sizeof(nama[0]);
    d.daftarBaru(nama,jumlah);
    
    d.hapusAkhir();
    
    d.tambahAkhir("uang");
    
    // d.hapusDaftar();
    
    d.cetakDaftar();
    
    return 0;
}