void rotateArray(vector<int>&nums, int rotationDegree) {
    int s = nums.size();
    vector<int> temp(s); // created temporary vector of size == nums.size()
    for(int i = 0; i < s; i++) temp[(i + rotationDegree) % s] = nums[i]; // ith index + rotationDegree shifted ahead. modded into vector size range
    nums = temp; // stored new rotated array back to original array
}