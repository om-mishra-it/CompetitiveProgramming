//You are given two numbers 'A' and 'B' in the form of two arrays (A[] and B[])
//of lengths 'N' and 'M' respectively, where each array element represents a digit.
//You need to find the sum of these two numbers and return this sum in the form of an array.

vector<int> summationOfTwoArrays(vector<int>&arr1, int n, vector<int>&arr2, int m) {
    vector<int>ans;
    int i = n - 1; // set to last digit of arr1
    int j = m - 1; // set to last digit of arr2
    int carry = 0; // carry is 0 in the beginning
    // adding from right to left
    while(i >= 0 && j >= 0) {
        int sum = arr1[i--] + arr2[j--] + carry; // re-init sum all the time, to calculate fresh sum of digits
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
    }
    // if arr1 has more digits remaining
    while(i >= 0) {
        int sum = arr1[i--] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
    }
    // if arr2 has more digits remaining
    while(j >= 0) {
        int sum = arr2[j--] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
    }
    // if carry is remaining to be added up
    while(carry) {
        int sum = carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
    }
    // Note: <ans> stored the value in reverse order, therefore we need to reverse it once to get final answer
    reverse(ans.begin(), ans.end());
    return ans;
}