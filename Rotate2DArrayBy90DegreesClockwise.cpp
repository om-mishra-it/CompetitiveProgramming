//    Given n*n matrix, rotate it by 90 degrees clockwise such that,
//
//    1 2 3               7 4 1
//    4 5 6       ->      8 5 2
//    7 8 9               9 6 3
//    Do not use another vector/array. Perform rotation in-place

void rotateBy90Degrees(vector<vector<int>> &matrix) {
    int size = matrix.size();
    // swapping middle elements (placed at diamond positions [2,4,6,8]) with each other
    for(int i = 0; i < size; i++) {
        for(int j = i + 1; j < n; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    // swapping edge elements (placed at corner positions [1,3,7,9]) with each other
    for(int i = 0; i < size; i++) {
        int low = 0;
        int high = size - 1;
        // Note: Row is always fixed at i-th position, only column index is changed.
        while(low < high) swap(matrix[i][low++], matrix[i][high--]);
    }
}