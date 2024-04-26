#include <iostream>
using namespace std;

class operasi_matematika{
    private: 

    float a1;
    float a2;
    char op;

    public:

    operasi_matematika(float a1, float a2, char op){
        this->a1 = a1;
        this->a2 = a2;
        this->op = op;
    }

    void setBil1(float a1){
        this -> a1 = a1;
    }
    void setBil2(float a2){
        this -> a2 = a2;
    }
    void setOP(char op){
        this -> op = op;
    }
    
    float getBil1(){
        return a1;
    }
    float getBil2(){
        return a2;
    }
    char getOP(){
        return op;
    }

    float kalkulator(){
        float hasil;
        if(op == '+'){
            hasil = a1 + a2;
            cout << hasil;
        }else if(op == '-'){
            hasil = a1 - a2;
            cout << hasil;
        }else if(op == '*'){
            hasil = a1*a2;
            cout << hasil;
        }else if(op == '/'){
            if (a2 == 0){
                cout << " pembagi tidak boleh 0" << endl;
            }else{
                hasil = a1 / a2;
                cout << hasil;
                }
        }else{
            cout << "Operator tidak valid.";
        }
        
    }

};

int main(){

    float a1;
    float a2;
    char op;

    cout << "masukan angka pertama : ";
    cin >> a1;
    

    cout << "masukan angka kedua : ";
    cin >> a2;
    

    cout << "masukan operator : ";
    cin >> op;
    
    operasi_matematika kalku(a1,a2,op);
    kalku.kalkulator();

}

AAFLKHPFSSUFICICLESGNNH

SFVREOMRWLRTTSXOQQNAOAO 

QEIAIFXAEIRFVFYSXIMINJI

WSTRLGOCAPBIAFIWIWTUACм

FEYAEAISTPCRLUJKOAKCERS

RVDAKPNDEEHDEMSNCKKFOAH

MRNEDSLCRRIWNRSAAFITMMI

YAAECIEAHYMOTAVHRSSTISB

RJSEWELCCENNIETOHWSGLSE 

ATANYΥΜΟΙΕESNESIOIRELTR

UTENEWEBHMYBETNNRAIEBEN

RCLKUTEAEQJLSGSHTGDSKOA

BHOICATNRRSDDECEHOOLGIT

ENSLUARIRSETALOCOHCТОНЕ 

FZFUDQJYMADOYIWYGLOVESU

TEKALFWONSNAEBMIEJTZNTG

ESWPOSJXEUTUYOZUWAKEZHM

KZUHΒΡΕΖΕEERFLMSNOWBALLH 

NSNOWBOARDYTVWYCLEVOHSA

ACOCRQLGZIYCHODRAZZILBI 

LBVKKWANZAAQINWOLPWONSL

BFREEZINGRAINSLILGTMELT

HQPYLWHFMNFFUFPSWXNUMMV