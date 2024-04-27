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
