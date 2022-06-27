//You have been given a sorted array/list ARR consisting of ‘N’ elements. You are also given an integer ‘K’.
//Now the array is rotated at some pivot point unknown to you. For example, if ARR = [ 1, 3, 5, 7, 8]. Then after rotating ARR at index 3, the array will be ARR = [7, 8, 1, 3, 5].
//Now, your task is to find the index at which ‘K’ is present in ARR.

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

int findPivotPosition(vector<int>& arr, int n) {
    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    while(s < e) {
        // if the mid element is greater than first element, move start to mid+1 (go into Line:2)
        if(arr[mid] >= arr[0]) s = mid+1;
        // otherwise mid is already in Line:2 we can iterate here. Move end to mid position
        else e = mid;
        mid = s + (e-s)/2;
    }
    return s; // or you can also return e; both are pointing at pivot element
}

int findPosition(vector<int>& arr, int n, int k) {
    int pi = findPivotPosition(arr, n);
    if(k >= arr[pi] && k <= arr[n-1]) return binarySearch(arr, pi, n-1, k);
    else return binarySearch(arr, 0, pi-1, k);
}
