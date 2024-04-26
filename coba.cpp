#include <iostream>
#include <iomanip>
using namespace std;
// no 5
//  int a,b,c,d;

// int max_of_four (int a,int b,int c,int d){
//     int max = a;
//     if (b > max ){
//          max = b;
//     }if (c > max ){
//         max = c;
//     }if (d > max ){
//         max = d;
//     }

//     return max;
// }

// int main (){
// cout << "masukan angka ";
// cin >> a >> b >> c >> d;
// cout << "angka terbesar adalah " <<max_of_four(a,b,c,d);
// }
// sampe sini

// batas
// #include <iostream>
// using namespace std;

// // Fungsi untuk mengurutkan tiga bilangan integer dari terkecil ke terbesar
// void sortThreeIntegers(int num1, int num2, int num3, int &smallest, int &middle, int &largest) {
//     if (num1 <= num2 && num1 <= num3) {
//         smallest = num1;
//         if (num2 <= num3) {
//             middle = num2;
//             largest = num3;
//         } else {
//             middle = num3;
//             largest = num2;
//         }
//     } else if (num2 <= num1 && num2 <= num3) {
//         smallest = num2;
//         if (num1 <= num3) {
//             middle = num1;
//             largest = num3;
//         } else {
//             middle = num3;
//             largest = num1;
//         }
//     } else {
//         smallest = num3;
//         if (num1 <= num2) {
//             middle = num1;
//             largest = num2;
//         } else {
//             middle = num2;
//             largest = num1;
//         }
//     }
// }

// int main() {
//     int num1, num2, num3;
//     cout << "Masukkan tiga bilangan integer: ";
//     cin >> num1 >> num2 >> num3;

//     int smallest, middle, largest;

//     // Memanggil fungsi untuk mengurutkan tiga bilangan integer
//     sortThreeIntegers(num1, num2, num3, smallest, middle, largest);

//     // Menampilkan hasil pengurutan
//     cout << "Bilangan terurut dari terkecil ke terbesar: " << smallest << ", " << middle << ", " << largest << endl;

//     return 0;
// }

// batas


// soal no 1 kuiss

// void nol(int arr[], int N){
//     for(int i = 0; i < N; i++){

//         if(arr[i] == 0){
//             for (int j = N -1; j > i; j--){
//                 arr[j] = arr[j-1];
//             }
//             if (i + 1 < N){
//                 arr[i+1] = 0;
//             }
//             ++i;
//         }
//     }
//     cout << "hasil ";
//     for(int i = 0; i < N; i++){
//         cout << arr[i] << " ";
//     }
// }

// kuis no 2
// bool checkThreeConsecutiveOdds(int arr[], int length) {
//     int count = 0;
//     for (int i = 0; i < length; ++i) {
//         if (arr[i] % 2 != 0) {
//             count++;
//             if (count == 3) {
//                 return true;
//             }
//         } else {
//             count = 0; // Reset count jika bukan bilangan ganjil
//         }
//     }
//     return false;
// }
// kuis no 2



// void findExtraElement(int arr1[], int arr2[], int length) {
//     // Cari elemen tambahan dari arr1
//     for (int i = 0; i < length; ++i) {
//         bool found = false;
//         for (int j = 0; j < length; ++j) {
//             if (arr1[i] == arr2[j]) {
//                 found = true;
//                 break;
//             }
//         }
//         if (!found) {
//             cout << "Elemen tambahan: " << arr1[i] << endl;
//             return;
//         }
//     }
    
//     cout << "Tidak ada elemen tambahan" << endl;
// }


// long nilaiTertinggi(int arr[], int N){
//     for (int i = 0; i < N - 1; ++i) {
//         for (int j = 0; j < N - i - 1; ++j) {
//             if (arr[j] > arr[j + 1]) {
//                 swap(arr[j], arr[j + 1]);
//             }
//         }
//     }
//     cout << "Output setelah diurutkan: ";
//     for (int i = N - 1; i >= 0; i--) {
//         cout << arr[i];
//     }

//     return arr[0];

// }


   





int main() {
    // int arr[] = {9, 1, 9, 2, 8, 4, 2};
    // int size = sizeof(arr) / sizeof(arr[0]);
    // nilaiTertinggi(arr,size);
    
    int arr1[] = {1, 2, 3, 4, 5};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    // Array kedua
    int arr2[] = {2, 3, 4, 5, 6};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    // Array ketiga
    int arr3[] = {3, 4, 5, 6, 7};
    int size3 = sizeof(arr3) / sizeof(arr3[0]);

    cout << "Elemen yang ada di ketiga array: ";
    for (int i = 0; i < size1; ++i) {
        for (int j = 0; j < size2; ++j) {
            for (int k = 0; k < size3; ++k) {
                if (arr1[i] == arr2[j] && arr1[i] == arr3[k]) {
                    cout << arr1[i] << " ";
                }
            }
        }
    }
    cout << endl;

    // int arr1[] = {2, 3, 9, 4, 5};
    // int arr2[] = {2, 3, 4, 5};
    // int length = sizeof(arr1) / sizeof(arr1[0]);
    
    // findExtraElement(arr1, arr2, length);
    
    
    

    // int matrix1[2][2], matrix2[2][2], result[2][2];

    // // Input elemen-elemen matriks pertama
    // cout << "Masukkan elemen-elemen matriks pertama:" << endl;
    // for (int i = 0; i < 2; ++i) {
    //     for (int j = 0; j < 2; ++j) {
    //         cin >> *(*(matrix1 + i) + j);
    //     }
    // }

    // // Input elemen-elemen matriks kedua
    // cout << "Masukkan elemen-elemen matriks kedua:" << endl;
    // for (int i = 0; i < 2; ++i) {
    //     for (int j = 0; j < 2; ++j) {
    //         cin >> *(*(matrix2 + i) + j);
    //     }
    // }

    // // Perkalian matriks
    // for (int i = 0; i < 2; ++i) {
    //     for (int j = 0; j < 2; ++j) {
    //         *(*(result + i) + j) = 0;
    //         for (int k = 0; k < 2; ++k) {
    //             *(*(result + i) + j) += *(*(matrix1 + i) + k) * *(*(matrix2 + k) + j);
    //         }
    //     }
    // }

    // // Tampilkan hasil perkalian matriks
    // cout << "Hasil perkalian matriks:" << endl;
    // for (int i = 0; i < 2; ++i) {
    //     for (int j = 0; j < 2; ++j) {
    //         cout << *(*(result + i) + j) << " ";
    //     }
    //     cout << endl;
    // }



     

    return 0;
}



    
     

