vector<int> spiralPrint(vector<vector<int>> matrix) {
    int row = matrix.size();
    int col = matrix[0].size();
    int count = 0; // keeps track of number of elements
    int totalElements = (row * col); // there are row*col number of elements in matrix
    vector<int> ans; // to store elements spirally

    // indices to frame the matrix and run 4 different iterations, one after another
    startRow = 0; // set to first row
    startCol = 0; // set to first column
    endRow = row-1; // set to last row
    endCol = col-1; // set to last column

    while(count < totalElements) {
        int index = startCol;
        while(index <= endCol && count++ < totalElements) // moving left to right on first row. Thus column wise movement.
            ans.push_back(matrix[startRow][index++]); // fix the row and move column++
        startRow++; // current row added, now shift the row ahead

        index = startRow;
        while(index <= endRow && count++ < totalElements) // moving top to bottom on last column. Thus row wise movement.
            ans.push_back(matrix[index++][endCol]); // fix the column and move row++
        endCol--; // current column added, now shift column behind

        index = endCol;
        while(index >= startCol && count++ < totalElements) // moving right to left on last row. Thus column wise movement.
            ans.push_back(matrix[endRow][index--]); // fix the row and move column--
        endRow--; // current row added, now shift row upwards

        index = endRow;
        while(index >= startRow && count++ < totalElements) // moving bottom to up on first column. Thus row wise movement.
            ans.push_back(matrix[index--][startCol]); // fix the column and move row--
        startCol++; // current column added, now shift column ahead
    }
    return ans; // return spiral vector
}