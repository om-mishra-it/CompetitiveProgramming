bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int row = matrix.size(); // store number of rows
    int col = matrix[0].size(); // store number of columns
    int s = 0; // starting pointer at 0
    int e = (row*col)-1; // ending pointer at totalElements-1

    while(s <= e) {
        int mid = s + (e - s) / 2; // calculate mid
        int element = matrix[mid / col][mid % col]; // for 2D array, first index is "/col" and second index is "%col"
        if(element == target) return true; // element found
        else if(element > target) e = mid - 1;
        else if(element < target) s = mid + 1;
    }
    return false; // element not found
}