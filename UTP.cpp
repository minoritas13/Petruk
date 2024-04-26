// buatkan class namanya trapezoid atribut nya public base1, base2
#include <iostream>
using namespace std;

template <class T>
class Kite {
private:
    T diagonal_1, diagonal_2;
public:
    Kite(T diagonal_1 = 10, T diagonal_2 = 10) : diagonal_1(diagonal_1), diagonal_2(diagonal_2) {}
    
    void setDiagonal1(T diagonal_1) {
        this->diagonal_1 = diagonal_1;
    }
    
    void setDiagonal2(T diagonal_2) {
        this->diagonal_2 = diagonal_2;
    }
    
    T getDiagonal1() {
        return diagonal_1;
    }
    
    T getDiagonal2() {
        return diagonal_2;
    }
    
    double calculateArea() {
        return (this->diagonal_1 * this->diagonal_2) / 2;
    }
    
    double calculatePerimeter() {
        return 2 * (this->diagonal_1 + this->diagonal_2);
    }
};

int main() {
    Kite<double> tp(10.0, 10.0);
    double area = tp.calculateArea();
    double perimeter = tp.calculatePerimeter();
    
    cout << "Area of the kite: " << area << endl;
    cout << "Perimeter of the kite: " << perimeter << endl;
    
    return 0;
}

// buat konstruktor dengan paramaeter sama kaya tadi 

