// 1 2 3
// 4 5 6       ->      1 4 7 8 5 2 3 6 9
// 7 8 9

vector<int> wavePrint(vector<vector<int>>arr, int maxRows, int maxColumns) {
    vector<int> ans;
    for(int col = 0; col < maxColumns; col++) {
        if(col & 1) // if column is odd
            for(int row = maxRows-1; row >= 0; row--) // move bottom to up
                ans.push_back(arr[row][col]);
        else
            for(int row = 0; row < maxRows; row++) // move top to bottom
                ans.push_back(arr[row][col]);
    }
    return ans;
}