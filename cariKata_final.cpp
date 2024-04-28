#include <iostream>
#include <vector>
#include <string>

using namespace std;


bool searchHorizontal(vector<string>& matrix, string word) {
    int n = matrix.size();
    int m = matrix[0].size();
    
    for (string& row : matrix) {
        if (row.find(word) != string::npos) {
            return true;
        }
    }
    return false;
}


bool searchVertical(vector<string>& matrix, string word) {
    int n = matrix.size();
    int m = matrix[0].size();

    for (int j = 0; j < m; ++j) {
        string col;
        for (int i = 0; i < n; ++i) {
            col.push_back(matrix[i][j]);
        }
        if (col.find(word) != string::npos) {
            return true;
        }
    }
    return false;
}


bool searchDiagonal(vector<string>& matrix, string word) {
    int n = matrix.size();
    int m = matrix[0].size();

    
    for (int i = 0; i < n; ++i) {
        string diagonal;
        for (int j = 0; i + j < n && j < m; ++j) {
            diagonal.push_back(matrix[i + j][j]);
        }
        if (diagonal.find(word) != string::npos) {
            return true;
        }
    }

    
    for (int j = 1; j < m; ++j) {
        string diagonal;
        for (int i = 0; i < n && j + i < m; ++i) {
            diagonal.push_back(matrix[i][j + i]);
        }
        if (diagonal.find(word) != string::npos) {
            return true;
        }
    }

    return false;
}

int main() {

    vector<string> matrix = {
        "aaflkhpfssuficiclesgnnh","sfvreomrwlrttsxqqnaoao","qeiaifxaeirfvfysximinji",
		"wstrlgocapbiafiwiwtuacm","feyaeapistpcrlujkoakcers","rvdakpndeehdemsnckkfoah",
		"mrnedslcrriwnrsaafitmmi","yaaecieahymotavhrsstisb","rjsewelccennietohwsglse",
		"atanyymoieesnesioireltr","utenewebhmybetnnraieben","rclkuteaeqjlsgshtgdskoa",
		"bhoicatnrrsddecehoolgit","ensluarirsetalocohctohe","fzfudqjymadoyiwyglovesu",
		"tekalfwonsnaebmiejtzntg","eswposjxeutuyozuwakezhm","kzuhbpezeerflmsnowballh",
		"nsnowboardytvwyclevohsa","acocrolgziychodrazzilbi","lbvkkwanzaaqinwolpwonsl",
		"bfreezingrainslilgtmelt","hqpylwhfmnffufpswxnummv",
    };

    int M;
    cin >> M; 

    vector<string> words(M);
    for (int i = 0; i < M; ++i) {
        cin >> words[i]; 
    }

    
    for (const string& word : words) {
        bool found = searchHorizontal(matrix, word) || searchVertical(matrix, word) || searchDiagonal(matrix, word);
        if (found) {
            cout << "Ada" << endl;
        } else {
            cout << "Tidak Ada" << endl;
        }
    }

    return 0;
}
