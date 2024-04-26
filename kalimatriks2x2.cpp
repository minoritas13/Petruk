#include <iostream>

using namespace std;

int main() {
    int matrix1[2][2] = {{2,2},{3,4}}; 
    int matrix2[2][2] = {{2,2},{3,4}};
    int hasil[2][2];

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            *(*(hasil + i) + j) = 0;
            for (int k = 0; k < 2; ++k) {
                *(*(hasil + i) + j) += *(*(matrix1 + i) + k) * *(*(matrix2 + k) + j);
            }
        }
    }

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            cout << "baris " << i << " kolom " << j << " = ";
            cout << *(*(hasil + i) + j) << " ";
        }
        cout << endl;
    }
}