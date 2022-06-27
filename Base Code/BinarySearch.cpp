int binarySearch(vector<int>& arr, int s, int e, int k) {
    int mid = s + (e-s)/2;
    while(s <= e) {
        if(arr[mid] == k) return mid;
        if(arr[mid] < k) s = mid+1;
        else e = mid-1;
        mid = s + (e-s)/2;
    }
    return -1;
}