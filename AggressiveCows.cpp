//Given an array of length ‘N’, where each element denotes the position of a stall.
//Now you have ‘N’ stalls and an integer ‘K’ which denotes the number of cows that are aggressive.
//To prevent the cows from hurting each other, you need to assign the cows to the stalls, such that the minimum distance
//between any two of them is as large as possible.
//Return the largest minimum distance.

bool isPossibleToPlaceCowsHere(vector<int> &arr, int n, int mid, int k) {
    int cowCount = 1; // starting with first cow
    int initialPosition = arr[0]; // setting first cow at 0th position of arr-stall
    for(int i = 0; i < n; i++) {
        if(arr[i] - initialPosition >= mid) { // if distance between arr[i] and initialPosition is greater than or equal to threshold point 'mid'
            cowCount++; // place a cow at this point
            if(cowCount == k) return true; // all cows placed, all cows are at sufficient distance therefore 'mid' is possible answer
            initialPosition = arr[i]; // else update initialPosition to current position
        }
    }
    return false; // nothing worked, mid is not a possible answer
}

// given stalls and k-cows
int aggressiveCows(vector<int> &stalls, int k) {
    sort(stalls.begin(), stalls.end()); // O(n log n)
    int n = stalls.size();
    int s = 0;
    int e = stalls[n-1]; // store maximum element in e which is at [n-1]
    while(s <= e) { // O(log n)
        if(isPossibleToPlaceCowsHere(stalls, n, mid, k)) {
            ans = mid; // store this mid value
            s = mid + 1; // check rightwards for more greater possible values
        }
        else e = mid - 1; // check leftwards because this mid was not a possible answer
    }
    return ans;
}