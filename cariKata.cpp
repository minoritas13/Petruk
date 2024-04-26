#include <iostream>
#include <vector>
#include <string>

using namespace std;

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


