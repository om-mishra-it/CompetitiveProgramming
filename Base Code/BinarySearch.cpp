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

int binarySearch(vector<int>& arr, int s, int e, int k) {
    if(e < s) return -1;
    int mid = s + (e-s) / 2;
    if(arr[mid] == k) return mid;
    if(arr[mid] < k) binarySearch(arr, mid + 1, e, k);
    else binarySearch(arr, s, mid - 1, k);
}