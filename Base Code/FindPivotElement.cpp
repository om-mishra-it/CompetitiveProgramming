// Note: pivot element is always in Line:2
int findPivotPosition(vector<int>& arr, int n) {
    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    while(s < e) {
        // mid is pointing in Line:1, move start to mid+1 (go into Line:2)
        if(arr[mid] >= arr[0]) s = mid+1;
        // otherwise mid is already in Line:2 we can iterate here. Move end to mid position
        else e = mid;
    }
    return s; // or you can also return e; both are pointing at pivot element
}