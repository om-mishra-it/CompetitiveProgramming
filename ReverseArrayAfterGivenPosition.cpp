// Using 2 pointer approach
void reverseArray(vector<int> &arr, int pos) {
    int i = pos + 1; // because we need to change the array after given position
    int j = arr.size() - 1; // set to last element
    while(i <= j) swap(arr[++i], arr[--j]); // swapping elements and moving i, j pointers
}